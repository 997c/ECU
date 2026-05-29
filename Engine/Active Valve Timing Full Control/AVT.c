#include "AVT.h"
#include <string.h>

static AVT_State  AVT_g_state;
static AVT_Config AVT_g_config;

void AVT_init(const AVT_Config* cfg) {
    if (cfg) AVT_g_config = *cfg;
    else     memset(&AVT_g_config, 0, sizeof(AVT_g_config));
    memset(&AVT_g_state, 0, sizeof(AVT_g_state));
}

void AVT_update(float dt_ms, const VehicleState* vs, AVT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AVT_g_state = *state;
    /* TODO: implement AVT control logic for Active Valve Timing Full Control */
}

void AVT_shutdown(void) {
    AVT_g_state.active = false;
}
