#include "WLE.h"
#include <string.h>

static WLE_State  WLE_g_state;
static WLE_Config WLE_g_config;

void WLE_init(const WLE_Config* cfg) {
    if (cfg) WLE_g_config = *cfg;
    else     memset(&WLE_g_config, 0, sizeof(WLE_g_config));
    memset(&WLE_g_state, 0, sizeof(WLE_g_state));
}

void WLE_update(float dt_ms, const VehicleState* vs, WLE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) WLE_g_state = *state;
    /* TODO: implement WLE control logic for Wheel Load Estimation */
}

void WLE_shutdown(void) {
    WLE_g_state.active = false;
}
