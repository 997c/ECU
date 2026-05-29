#include "AFC.h"
#include <string.h>

static AFC_State  AFC_g_state;
static AFC_Config AFC_g_config;

void AFC_init(const AFC_Config* cfg) {
    if (cfg) AFC_g_config = *cfg;
    else     memset(&AFC_g_config, 0, sizeof(AFC_g_config));
    memset(&AFC_g_state, 0, sizeof(AFC_g_state));
}

void AFC_update(float dt_ms, const VehicleState* vs, AFC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFC_g_state = *state;
    /* TODO: implement AFC control logic for Active Floor Clearance Control */
}

void AFC_shutdown(void) {
    AFC_g_state.active = false;
}
