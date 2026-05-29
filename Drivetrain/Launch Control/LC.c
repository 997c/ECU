#include "LC.h"
#include <string.h>

static LC_State  LC_g_state;
static LC_Config LC_g_config;

void LC_init(const LC_Config* cfg) {
    if (cfg) LC_g_config = *cfg;
    else {
        LC_g_config.param1 = 10000.0f; /* target launch RPM */
        LC_g_config.param2 = 0.15f;     /* max slip ratio */
        LC_g_config.param3 = 0.0f;
        LC_g_config.enabled = 1;
    }
    memset(&LC_g_state, 0, sizeof(LC_g_state));
}

void LC_update(float dt_ms, const VehicleState* vs, LC_State* state, ActuatorCommands* out) {
    (void)dt_ms;
    if (!LC_g_config.enabled || !vs || !out) return;
    /* Launch active at low speed + high throttle */
    if (vs->speed_kmh < 60.0f && vs->throttle_pedal > 0.8f) {
        LC_g_state.active = true;
        float rpm_err = vs->rpm - LC_g_config.param1;
        float clutch = 0.5f - rpm_err * 0.0002f;
        clutch = ecu_clampf(clutch, 0.2f, 0.8f);
        LC_g_state.value = clutch; /* clutch pos stored in value */
        out->clutch_position = clutch;
        if (vs->rpm > LC_g_config.param1 * 1.05f) out->throttle_cmd *= 0.9f;
    } else {
        LC_g_state.active = false;
        LC_g_state.value = 1.0f;
        out->clutch_position = 1.0f;
    }
    if (state) *state = LC_g_state;
}

void LC_shutdown(void) {
    LC_g_state.active = false;
    LC_g_state.value = 1.0f;
}
