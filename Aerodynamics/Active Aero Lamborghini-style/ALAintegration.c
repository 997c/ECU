#include "ALAintegration.h"
#include <string.h>

static ALA_State ALA_g_int_state;

void ALA_integration_init(void) {
    memset(&ALA_g_int_state, 0, sizeof(ALA_g_int_state));
}

void ALA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ALA_update(dt_ms, &bridge->state, &ALA_g_int_state, out);
    /* TODO: map ALA outputs to global actuators (Active Aero Lamborghini-style) */
}
