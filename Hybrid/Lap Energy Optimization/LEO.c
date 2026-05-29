#include "LEO.h"
#include <string.h>

static LEO_State  LEO_g_state;
static LEO_Config LEO_g_config;

void LEO_init(const LEO_Config* cfg) {
    if (cfg) LEO_g_config = *cfg;
    else     memset(&LEO_g_config, 0, sizeof(LEO_g_config));
    memset(&LEO_g_state, 0, sizeof(LEO_g_state));
}

void LEO_update(float dt_ms, const VehicleState* vs, LEO_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) LEO_g_state = *state;
    /* TODO: implement LEO control logic for Lap Energy Optimization */
}

void LEO_shutdown(void) {
    LEO_g_state.active = false;
}
