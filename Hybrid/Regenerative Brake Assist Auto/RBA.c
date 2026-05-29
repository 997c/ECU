#include "RBA.h"
#include <string.h>

static RBA_State  RBA_g_state;
static RBA_Config RBA_g_config;

void RBA_init(const RBA_Config* cfg) {
    if (cfg) RBA_g_config = *cfg;
    else     memset(&RBA_g_config, 0, sizeof(RBA_g_config));
    memset(&RBA_g_state, 0, sizeof(RBA_g_state));
}

void RBA_update(float dt_ms, const VehicleState* vs, RBA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) RBA_g_state = *state;
    /* TODO: implement RBA control logic for Regenerative Brake Assist Auto */
}

void RBA_shutdown(void) {
    RBA_g_state.active = false;
}
