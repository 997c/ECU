#include "ABD.h"
#include <string.h>

static ABD_State  ABD_g_state;
static ABD_Config ABD_g_config;

void ABD_init(const ABD_Config* cfg) {
    if (cfg) ABD_g_config = *cfg;
    else     memset(&ABD_g_config, 0, sizeof(ABD_g_config));
    memset(&ABD_g_state, 0, sizeof(ABD_g_state));
}

void ABD_update(float dt_ms, const VehicleState* vs, ABD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABD_g_state = *state;
    /* TODO: implement ABD control logic for Active Brake Duct Control */
}

void ABD_shutdown(void) {
    ABD_g_state.active = false;
}
