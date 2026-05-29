#include "ARS3.h"
#include <string.h>

static ARS3_State  ARS3_g_state;
static ARS3_Config ARS3_g_config;

void ARS3_init(const ARS3_Config* cfg) {
    if (cfg) ARS3_g_config = *cfg;
    else     memset(&ARS3_g_config, 0, sizeof(ARS3_g_config));
    memset(&ARS3_g_state, 0, sizeof(ARS3_g_state));
}

void ARS3_update(float dt_ms, const VehicleState* vs, ARS3_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARS3_g_state = *state;
    /* TODO: implement ARS3 control logic for Active Rear Steering */
}

void ARS3_shutdown(void) {
    ARS3_g_state.active = false;
}
