#include "AVR.h"
#include <string.h>

static AVR_State  AVR_g_state;
static AVR_Config AVR_g_config;

void AVR_init(const AVR_Config* cfg) {
    if (cfg) AVR_g_config = *cfg;
    else     memset(&AVR_g_config, 0, sizeof(AVR_g_config));
    memset(&AVR_g_state, 0, sizeof(AVR_g_state));
}

void AVR_update(float dt_ms, const VehicleState* vs, AVR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AVR_g_state = *state;
    /* TODO: implement AVR control logic for Active Variable Steering Ratio */
}

void AVR_shutdown(void) {
    AVR_g_state.active = false;
}
