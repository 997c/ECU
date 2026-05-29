#include "SPL.h"
#include <string.h>

static SPL_State  SPL_g_state;
static SPL_Config SPL_g_config;

void SPL_init(const SPL_Config* cfg) {
    if (cfg) SPL_g_config = *cfg;
    else     memset(&SPL_g_config, 0, sizeof(SPL_g_config));
    memset(&SPL_g_state, 0, sizeof(SPL_g_state));
}

void SPL_update(float dt_ms, const VehicleState* vs, SPL_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SPL_g_state = *state;
    /* TODO: implement SPL control logic for Sensor Plausibility Checking */
}

void SPL_shutdown(void) {
    SPL_g_state.active = false;
}
