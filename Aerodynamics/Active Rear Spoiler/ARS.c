#include "ARS.h"
#include <string.h>

static ARS_State  ARS_g_state;
static ARS_Config ARS_g_config;

void ARS_init(const ARS_Config* cfg) {
    if (cfg) ARS_g_config = *cfg;
    else     memset(&ARS_g_config, 0, sizeof(ARS_g_config));
    memset(&ARS_g_state, 0, sizeof(ARS_g_state));
}

void ARS_update(float dt_ms, const VehicleState* vs, ARS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARS_g_state = *state;
    /* TODO: implement ARS control logic for Active Rear Spoiler */
}

void ARS_shutdown(void) {
    ARS_g_state.active = false;
}
