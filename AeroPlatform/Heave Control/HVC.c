#include "HVC.h"
#include <string.h>

static HVC_State  HVC_g_state;
static HVC_Config HVC_g_config;

void HVC_init(const HVC_Config* cfg) {
    if (cfg) HVC_g_config = *cfg;
    else     memset(&HVC_g_config, 0, sizeof(HVC_g_config));
    memset(&HVC_g_state, 0, sizeof(HVC_g_state));
}

void HVC_update(float dt_ms, const VehicleState* vs, HVC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) HVC_g_state = *state;
    /* TODO: implement HVC control logic for Heave Control */
}

void HVC_shutdown(void) {
    HVC_g_state.active = false;
}
