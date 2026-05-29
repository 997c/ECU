#include "VSC.h"
#include <string.h>

static VSC_State  VSC_g_state;
static VSC_Config VSC_g_config;

void VSC_init(const VSC_Config* cfg) {
    if (cfg) VSC_g_config = *cfg;
    else     memset(&VSC_g_config, 0, sizeof(VSC_g_config));
    memset(&VSC_g_state, 0, sizeof(VSC_g_state));
}

void VSC_update(float dt_ms, const VehicleState* vs, VSC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) VSC_g_state = *state;
    /* TODO: implement VSC control logic for Vehicle Stability Control */
}

void VSC_shutdown(void) {
    VSC_g_state.active = false;
}
