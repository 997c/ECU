#include "PPS.h"
#include <string.h>

static PPS_State  PPS_g_state;
static PPS_Config PPS_g_config;

void PPS_init(const PPS_Config* cfg) {
    if (cfg) PPS_g_config = *cfg;
    else     memset(&PPS_g_config, 0, sizeof(PPS_g_config));
    memset(&PPS_g_state, 0, sizeof(PPS_g_state));
}

void PPS_update(float dt_ms, const VehicleState* vs, PPS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) PPS_g_state = *state;
    /* TODO: implement PPS control logic for Porpoising Suppression */
}

void PPS_shutdown(void) {
    PPS_g_state.active = false;
}
