#include "ABS.h"
#include <string.h>

static ABS_State  ABS_g_state;
static ABS_Config ABS_g_config;

void ABS_init(const ABS_Config* cfg) {
    if (cfg) ABS_g_config = *cfg;
    else {
        ABS_g_config.param1 = 0.25f;   /* slip threshold */
        ABS_g_config.param2 = 15.0f;   /* pulse frequency Hz */
        ABS_g_config.param3 = 100.0f;  /* max brake pressure bar */
        ABS_g_config.enabled = 1;
    }
    memset(&ABS_g_state, 0, sizeof(ABS_g_state));
}

void ABS_update(float dt_ms, const VehicleState* vs, ABS_State* state, ActuatorCommands* out) {
    (void)dt_ms;
    if (!ABS_g_config.enabled || !vs || !out) return;
    float v = vs->speed_ms;
    if (v < 1.0f) {
        ABS_g_state.active = false;
        if (state) *state = ABS_g_state;
        return;
    }
    float ws[4] = { vs->wheel_speed_fl, vs->wheel_speed_fr, vs->wheel_speed_rl, vs->wheel_speed_rr };
    float slip[4], mod[4];
    for (int i = 0; i < 4; ++i) {
        slip[i] = (v - ws[i]) / (v + 0.001f);
        if (slip[i] > ABS_g_config.param1) {
            mod[i] = 1.0f - ecu_clampf((slip[i] - ABS_g_config.param1) * 5.0f, 0.0f, 1.0f);
        } else {
            mod[i] = 1.0f;
        }
    }
    ABS_g_state.value  = slip[0]; /* representative stored slip */
    ABS_g_state.target = mod[0];  /* representative modulation */
    ABS_g_state.active = true;

    float desired_total = vs->brake_pedal * ABS_g_config.param3 * 20.0f; /* approx total Nm */
    float per_wheel = desired_total * 0.25f;
    out->brake_torque_fl = per_wheel * mod[0];
    out->brake_torque_fr = per_wheel * mod[1];
    out->brake_torque_rl = per_wheel * mod[2];
    out->brake_torque_rr = per_wheel * mod[3];
    out->brake_pressure_bar = vs->brake_pedal * ABS_g_config.param3 * 0.3f;
    if (state) *state = ABS_g_state;
}

void ABS_shutdown(void) {
    ABS_g_state.active = false;
}
