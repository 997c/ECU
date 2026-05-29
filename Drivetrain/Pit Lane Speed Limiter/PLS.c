#include "PLS.h"
#include <string.h>

static PLS_State  PLS_g_state;
static PLS_Config PLS_g_config;

void PLS_init(const PLS_Config* cfg) {
    if (cfg) PLS_g_config = *cfg;
    else     memset(&PLS_g_config, 0, sizeof(PLS_g_config));
    memset(&PLS_g_state, 0, sizeof(PLS_g_state));
}

void PLS_update(float dt_ms, const VehicleState* vs, PLS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) PLS_g_state = *state;
    /* TODO: implement PLS control logic for Pit Lane Speed Limiter */
}

void PLS_shutdown(void) {
    PLS_g_state.active = false;
}
