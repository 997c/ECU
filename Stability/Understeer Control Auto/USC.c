#include "USC.h"
#include <string.h>

static USC_State  USC_g_state;
static USC_Config USC_g_config;

void USC_init(const USC_Config* cfg) {
    if (cfg) USC_g_config = *cfg;
    else     memset(&USC_g_config, 0, sizeof(USC_g_config));
    memset(&USC_g_state, 0, sizeof(USC_g_state));
}

void USC_update(float dt_ms, const VehicleState* vs, USC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) USC_g_state = *state;
    /* TODO: implement USC control logic for Understeer Control Auto */
}

void USC_shutdown(void) {
    USC_g_state.active = false;
}
