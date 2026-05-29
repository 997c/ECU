#include "SLR.h"
#include <string.h>

static SLR_State  SLR_g_state;
static SLR_Config SLR_g_config;

void SLR_init(const SLR_Config* cfg) {
    if (cfg) SLR_g_config = *cfg;
    else     memset(&SLR_g_config, 0, sizeof(SLR_g_config));
    memset(&SLR_g_state, 0, sizeof(SLR_g_state));
}

void SLR_update(float dt_ms, const VehicleState* vs, SLR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SLR_g_state = *state;
    /* TODO: implement SLR control logic for Slip Ratio Target Control */
}

void SLR_shutdown(void) {
    SLR_g_state.active = false;
}
