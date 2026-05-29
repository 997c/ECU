#include "TSE.h"
#include <string.h>

static TSE_State  TSE_g_state;
static TSE_Config TSE_g_config;

void TSE_init(const TSE_Config* cfg) {
    if (cfg) TSE_g_config = *cfg;
    else     memset(&TSE_g_config, 0, sizeof(TSE_g_config));
    memset(&TSE_g_state, 0, sizeof(TSE_g_state));
}

void TSE_update(float dt_ms, const VehicleState* vs, TSE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TSE_g_state = *state;
    /* TODO: implement TSE control logic for Tire State Estimation */
}

void TSE_shutdown(void) {
    TSE_g_state.active = false;
}
