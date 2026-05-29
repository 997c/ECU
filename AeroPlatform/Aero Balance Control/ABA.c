#include "ABA.h"
#include <string.h>

static ABA_State  ABA_g_state;
static ABA_Config ABA_g_config;

void ABA_init(const ABA_Config* cfg) {
    if (cfg) ABA_g_config = *cfg;
    else     memset(&ABA_g_config, 0, sizeof(ABA_g_config));
    memset(&ABA_g_state, 0, sizeof(ABA_g_state));
}

void ABA_update(float dt_ms, const VehicleState* vs, ABA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABA_g_state = *state;
    /* TODO: implement ABA control logic for Aero Balance Control */
}

void ABA_shutdown(void) {
    ABA_g_state.active = false;
}
