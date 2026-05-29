#include "ERB.h"
#include <string.h>

static ERB_State  ERB_g_state;
static ERB_Config ERB_g_config;

void ERB_init(const ERB_Config* cfg) {
    if (cfg) ERB_g_config = *cfg;
    else     memset(&ERB_g_config, 0, sizeof(ERB_g_config));
    memset(&ERB_g_state, 0, sizeof(ERB_g_state));
}

void ERB_update(float dt_ms, const VehicleState* vs, ERB_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ERB_g_state = *state;
    /* TODO: implement ERB control logic for Energy Recovery Braking */
}

void ERB_shutdown(void) {
    ERB_g_state.active = false;
}
