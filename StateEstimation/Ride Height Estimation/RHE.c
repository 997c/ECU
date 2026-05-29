#include "RHE.h"
#include <string.h>

static RHE_State  RHE_g_state;
static RHE_Config RHE_g_config;

void RHE_init(const RHE_Config* cfg) {
    if (cfg) RHE_g_config = *cfg;
    else     memset(&RHE_g_config, 0, sizeof(RHE_g_config));
    memset(&RHE_g_state, 0, sizeof(RHE_g_state));
}

void RHE_update(float dt_ms, const VehicleState* vs, RHE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RHE_g_state = *state;
    /* TODO: implement RHE control logic for Ride Height Estimation */
}

void RHE_shutdown(void) {
    RHE_g_state.active = false;
}
