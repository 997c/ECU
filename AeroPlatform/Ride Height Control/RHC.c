#include "RHC.h"
#include <string.h>

static RHC_State  RHC_g_state;
static RHC_Config RHC_g_config;

void RHC_init(const RHC_Config* cfg) {
    if (cfg) RHC_g_config = *cfg;
    else     memset(&RHC_g_config, 0, sizeof(RHC_g_config));
    memset(&RHC_g_state, 0, sizeof(RHC_g_state));
}

void RHC_update(float dt_ms, const VehicleState* vs, RHC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RHC_g_state = *state;
    /* TODO: implement RHC control logic for Ride Height Control */
}

void RHC_shutdown(void) {
    RHC_g_state.active = false;
}
