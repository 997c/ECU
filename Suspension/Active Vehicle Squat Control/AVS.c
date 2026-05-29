#include "AVS.h"
#include <string.h>

static AVS_State  AVS_g_state;
static AVS_Config AVS_g_config;

void AVS_init(const AVS_Config* cfg) {
    if (cfg) AVS_g_config = *cfg;
    else     memset(&AVS_g_config, 0, sizeof(AVS_g_config));
    memset(&AVS_g_state, 0, sizeof(AVS_g_state));
}

void AVS_update(float dt_ms, const VehicleState* vs, AVS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AVS_g_state = *state;
    /* TODO: implement AVS control logic for Active Vehicle Squat Control */
}

void AVS_shutdown(void) {
    AVS_g_state.active = false;
}
