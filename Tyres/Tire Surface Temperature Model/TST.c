#include "TST.h"
#include <string.h>

static TST_State  TST_g_state;
static TST_Config TST_g_config;

void TST_init(const TST_Config* cfg) {
    if (cfg) TST_g_config = *cfg;
    else     memset(&TST_g_config, 0, sizeof(TST_g_config));
    memset(&TST_g_state, 0, sizeof(TST_g_state));
}

void TST_update(float dt_ms, const VehicleState* vs, TST_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TST_g_state = *state;
    /* TODO: implement TST control logic for Tire Surface Temperature Model */
}

void TST_shutdown(void) {
    TST_g_state.active = false;
}
