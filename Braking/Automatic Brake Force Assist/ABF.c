#include "ABF.h"
#include <string.h>

static ABF_State  ABF_g_state;
static ABF_Config ABF_g_config;

void ABF_init(const ABF_Config* cfg) {
    if (cfg) ABF_g_config = *cfg;
    else     memset(&ABF_g_config, 0, sizeof(ABF_g_config));
    memset(&ABF_g_state, 0, sizeof(ABF_g_state));
}

void ABF_update(float dt_ms, const VehicleState* vs, ABF_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABF_g_state = *state;
    /* TODO: implement ABF control logic for Automatic Brake Force Assist */
}

void ABF_shutdown(void) {
    ABF_g_state.active = false;
}
