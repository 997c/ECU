#include "APS.h"
#include <string.h>

static APS_State  APS_g_state;
static APS_Config APS_g_config;

void APS_init(const APS_Config* cfg) {
    if (cfg) APS_g_config = *cfg;
    else     memset(&APS_g_config, 0, sizeof(APS_g_config));
    memset(&APS_g_state, 0, sizeof(APS_g_state));
}

void APS_update(float dt_ms, const VehicleState* vs, APS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) APS_g_state = *state;
    /* TODO: implement APS control logic for Active Pneumatic Suspension */
}

void APS_shutdown(void) {
    APS_g_state.active = false;
}
