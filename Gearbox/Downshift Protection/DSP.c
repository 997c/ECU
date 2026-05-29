#include "DSP.h"
#include <string.h>

static DSP_State  DSP_g_state;
static DSP_Config DSP_g_config;

void DSP_init(const DSP_Config* cfg) {
    if (cfg) DSP_g_config = *cfg;
    else     memset(&DSP_g_config, 0, sizeof(DSP_g_config));
    memset(&DSP_g_state, 0, sizeof(DSP_g_state));
}

void DSP_update(float dt_ms, const VehicleState* vs, DSP_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DSP_g_state = *state;
    /* TODO: implement DSP control logic for Downshift Protection */
}

void DSP_shutdown(void) {
    DSP_g_state.active = false;
}
