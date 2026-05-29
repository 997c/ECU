#include "PAA.h"
#include <string.h>

static PAA_State  PAA_g_state;
static PAA_Config PAA_g_config;

void PAA_init(const PAA_Config* cfg) {
    if (cfg) PAA_g_config = *cfg;
    else     memset(&PAA_g_config, 0, sizeof(PAA_g_config));
    memset(&PAA_g_state, 0, sizeof(PAA_g_state));
}

void PAA_update(float dt_ms, const VehicleState* vs, PAA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) PAA_g_state = *state;
    /* TODO: implement PAA control logic for Active Aerodynamics Porsche-style */
}

void PAA_shutdown(void) {
    PAA_g_state.active = false;
}
