#include "BBW.h"
#include <string.h>

static BBW_State  BBW_g_state;
static BBW_Config BBW_g_config;

void BBW_init(const BBW_Config* cfg) {
    if (cfg) BBW_g_config = *cfg;
    else     memset(&BBW_g_config, 0, sizeof(BBW_g_config));
    memset(&BBW_g_state, 0, sizeof(BBW_g_state));
}

void BBW_update(float dt_ms, const VehicleState* vs, BBW_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BBW_g_state = *state;
    /* TODO: implement BBW control logic for Brake-by-Wire */
}

void BBW_shutdown(void) {
    BBW_g_state.active = false;
}
