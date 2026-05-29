#include "HVS.h"
#include <string.h>

static HVS_State  HVS_g_state;
static HVS_Config HVS_g_config;

void HVS_init(const HVS_Config* cfg) {
    if (cfg) HVS_g_config = *cfg;
    else     memset(&HVS_g_config, 0, sizeof(HVS_g_config));
    memset(&HVS_g_state, 0, sizeof(HVS_g_state));
}

void HVS_update(float dt_ms, const VehicleState* vs, HVS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) HVS_g_state = *state;
    /* TODO: implement HVS control logic for Harvest Strategy Control */
}

void HVS_shutdown(void) {
    HVS_g_state.active = false;
}
