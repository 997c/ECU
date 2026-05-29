#include "RCS.h"
#include <string.h>

static RCS_State  RCS_g_state;
static RCS_Config RCS_g_config;

void RCS_init(const RCS_Config* cfg) {
    if (cfg) RCS_g_config = *cfg;
    else     memset(&RCS_g_config, 0, sizeof(RCS_g_config));
    memset(&RCS_g_state, 0, sizeof(RCS_g_state));
}

void RCS_update(float dt_ms, const VehicleState* vs, RCS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RCS_g_state = *state;
    /* TODO: implement RCS control logic for Regenerative Cornering Strategy Auto */
}

void RCS_shutdown(void) {
    RCS_g_state.active = false;
}
