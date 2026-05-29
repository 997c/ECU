#include "RDH.h"
#include <string.h>

static RDH_State  RDH_g_state;
static RDH_Config RDH_g_config;

void RDH_init(const RDH_Config* cfg) {
    if (cfg) RDH_g_config = *cfg;
    else     memset(&RDH_g_config, 0, sizeof(RDH_g_config));
    memset(&RDH_g_state, 0, sizeof(RDH_g_state));
}

void RDH_update(float dt_ms, const VehicleState* vs, RDH_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RDH_g_state = *state;
    /* TODO: implement RDH control logic for Redundancy Handling */
}

void RDH_shutdown(void) {
    RDH_g_state.active = false;
}
