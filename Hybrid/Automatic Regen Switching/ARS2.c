#include "ARS2.h"
#include <string.h>

static ARS2_State  ARS2_g_state;
static ARS2_Config ARS2_g_config;

void ARS2_init(const ARS2_Config* cfg) {
    if (cfg) ARS2_g_config = *cfg;
    else     memset(&ARS2_g_config, 0, sizeof(ARS2_g_config));
    memset(&ARS2_g_state, 0, sizeof(ARS2_g_state));
}

void ARS2_update(float dt_ms, const VehicleState* vs, ARS2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARS2_g_state = *state;
    /* TODO: implement ARS2 control logic for Automatic Regen Switching */
}

void ARS2_shutdown(void) {
    ARS2_g_state.active = false;
}
