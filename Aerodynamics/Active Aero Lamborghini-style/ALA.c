#include "ALA.h"
#include <string.h>

static ALA_State  ALA_g_state;
static ALA_Config ALA_g_config;

void ALA_init(const ALA_Config* cfg) {
    if (cfg) ALA_g_config = *cfg;
    else     memset(&ALA_g_config, 0, sizeof(ALA_g_config));
    memset(&ALA_g_state, 0, sizeof(ALA_g_state));
}

void ALA_update(float dt_ms, const VehicleState* vs, ALA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ALA_g_state = *state;
    /* TODO: implement ALA control logic for Active Aero Lamborghini-style */
}

void ALA_shutdown(void) {
    ALA_g_state.active = false;
}
