#include "RBT.h"
#include <string.h>

static RBT_State  RBT_g_state;
static RBT_Config RBT_g_config;

void RBT_init(const RBT_Config* cfg) {
    if (cfg) RBT_g_config = *cfg;
    else     memset(&RBT_g_config, 0, sizeof(RBT_g_config));
    memset(&RBT_g_state, 0, sizeof(RBT_g_state));
}

void RBT_update(float dt_ms, const VehicleState* vs, RBT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RBT_g_state = *state;
    /* TODO: implement RBT control logic for Rear Brake Torque with Regen */
}

void RBT_shutdown(void) {
    RBT_g_state.active = false;
}
