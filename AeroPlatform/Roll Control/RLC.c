#include "RLC.h"
#include <string.h>

static RLC_State  RLC_g_state;
static RLC_Config RLC_g_config;

void RLC_init(const RLC_Config* cfg) {
    if (cfg) RLC_g_config = *cfg;
    else     memset(&RLC_g_config, 0, sizeof(RLC_g_config));
    memset(&RLC_g_state, 0, sizeof(RLC_g_state));
}

void RLC_update(float dt_ms, const VehicleState* vs, RLC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RLC_g_state = *state;
    /* TODO: implement RLC control logic for Roll Control */
}

void RLC_shutdown(void) {
    RLC_g_state.active = false;
}
