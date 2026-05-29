#include "AHS.h"
#include <string.h>

static AHS_State  AHS_g_state;
static AHS_Config AHS_g_config;

void AHS_init(const AHS_Config* cfg) {
    if (cfg) AHS_g_config = *cfg;
    else     memset(&AHS_g_config, 0, sizeof(AHS_g_config));
    memset(&AHS_g_state, 0, sizeof(AHS_g_state));
}

void AHS_update(float dt_ms, const VehicleState* vs, AHS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AHS_g_state = *state;
    /* TODO: implement AHS control logic for Active Hydraulic Suspension */
}

void AHS_shutdown(void) {
    AHS_g_state.active = false;
}
