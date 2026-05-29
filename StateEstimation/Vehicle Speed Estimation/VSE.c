#include "VSE.h"
#include <string.h>

static VSE_State  VSE_g_state;
static VSE_Config VSE_g_config;

void VSE_init(const VSE_Config* cfg) {
    if (cfg) VSE_g_config = *cfg;
    else     memset(&VSE_g_config, 0, sizeof(VSE_g_config));
    memset(&VSE_g_state, 0, sizeof(VSE_g_state));
}

void VSE_update(float dt_ms, const VehicleState* vs, VSE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) VSE_g_state = *state;
    /* TODO: implement VSE control logic for Vehicle Speed Estimation */
}

void VSE_shutdown(void) {
    VSE_g_state.active = false;
}
