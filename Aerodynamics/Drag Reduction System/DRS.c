#include "DRS.h"
#include <string.h>

static DRS_State  DRS_g_state;
static DRS_Config DRS_g_config;

void DRS_init(const DRS_Config* cfg) {
    if (cfg) DRS_g_config = *cfg;
    else {
        DRS_g_config.param1 = 260.0f;  /* min speed km/h */
        DRS_g_config.param2 = 1.0f;    /* max gap seconds */
        DRS_g_config.param3 = 0.0f;
        DRS_g_config.enabled = 1;
    }
    memset(&DRS_g_state, 0, sizeof(DRS_g_state));
}

void DRS_update(float dt_ms, const VehicleState* vs, DRS_State* state, ActuatorCommands* out) {
    (void)dt_ms;
    if (!DRS_g_config.enabled || !vs || !out) return;
    bool allow = false;
    if (vs->speed_kmh > DRS_g_config.param1 /* min_speed */ && vs->brake_pedal < 0.05f) {
        if (vs->drs_zone) {
            if (vs->drs_delta_t >= 0.0f && vs->drs_delta_t < DRS_g_config.param2 /* max_gap */) {
                allow = true;
            } else if (vs->drs_delta_t < 0.0f) {
                allow = true; /* leading car also allowed in zone (simplified) */
            }
        }
    }
    DRS_g_state.active = allow;
    out->drs_active = allow;
    out->aero_rear_flap_deg = allow ? 0.0f : 15.0f; /* 0 deg = open/low drag, 15 deg = downforce */
    if (state) *state = DRS_g_state;
}

void DRS_shutdown(void) {
    DRS_g_state.active = false;
}
