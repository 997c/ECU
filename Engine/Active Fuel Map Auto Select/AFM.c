#include "AFM.h"
#include <string.h>

static AFM_State  AFM_g_state;
static AFM_Config AFM_g_config;

void AFM_init(const AFM_Config* cfg) {
    if (cfg) AFM_g_config = *cfg;
    else     memset(&AFM_g_config, 0, sizeof(AFM_g_config));
    memset(&AFM_g_state, 0, sizeof(AFM_g_state));
}

void AFM_update(float dt_ms, const VehicleState* vs, AFM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFM_g_state = *state;
    /* TODO: implement AFM control logic for Active Fuel Map Auto Select */
}

void AFM_shutdown(void) {
    AFM_g_state.active = false;
}
