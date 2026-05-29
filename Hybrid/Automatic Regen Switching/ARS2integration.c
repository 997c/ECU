#include "ARS2integration.h"
#include <string.h>

static ARS2_State ARS2_g_int_state;

void ARS2_integration_init(void) {
    memset(&ARS2_g_int_state, 0, sizeof(ARS2_g_int_state));
}

void ARS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARS2_update(dt_ms, &bridge->state, &ARS2_g_int_state, out);
    /* TODO: map ARS2 outputs to global actuators (Automatic Regen Switching) */
}
