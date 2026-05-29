#include "SBW.h"
#include <string.h>

static SBW_State  SBW_g_state;
static SBW_Config SBW_g_config;

void SBW_init(const SBW_Config* cfg) {
    if (cfg) SBW_g_config = *cfg;
    else     memset(&SBW_g_config, 0, sizeof(SBW_g_config));
    memset(&SBW_g_state, 0, sizeof(SBW_g_state));
}

void SBW_update(float dt_ms, const VehicleState* vs, SBW_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SBW_g_state = *state;
    /* TODO: implement SBW control logic for Steer-by-Wire */
}

void SBW_shutdown(void) {
    SBW_g_state.active = false;
}
