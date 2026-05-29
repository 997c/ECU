#include "SSE.h"
#include <string.h>

static SSE_State  SSE_g_state;
static SSE_Config SSE_g_config;

void SSE_init(const SSE_Config* cfg) {
    if (cfg) SSE_g_config = *cfg;
    else     memset(&SSE_g_config, 0, sizeof(SSE_g_config));
    memset(&SSE_g_state, 0, sizeof(SSE_g_state));
}

void SSE_update(float dt_ms, const VehicleState* vs, SSE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SSE_g_state = *state;
    /* TODO: implement SSE control logic for Sideslip Angle Estimation */
}

void SSE_shutdown(void) {
    SSE_g_state.active = false;
}
