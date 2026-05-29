#include "APC.h"
#include <string.h>

static APC_State  APC_g_state;
static APC_Config APC_g_config;

void APC_init(const APC_Config* cfg) {
    if (cfg) APC_g_config = *cfg;
    else     memset(&APC_g_config, 0, sizeof(APC_g_config));
    memset(&APC_g_state, 0, sizeof(APC_g_state));
}

void APC_update(float dt_ms, const VehicleState* vs, APC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) APC_g_state = *state;
    /* TODO: implement APC control logic for Pre-Chamber Ignition Control */
}

void APC_shutdown(void) {
    APC_g_state.active = false;
}
