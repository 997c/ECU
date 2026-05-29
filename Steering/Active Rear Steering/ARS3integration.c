#include "ARS3integration.h"
#include <string.h>

static ARS3_State ARS3_g_int_state;

void ARS3_integration_init(void) {
    memset(&ARS3_g_int_state, 0, sizeof(ARS3_g_int_state));
}

void ARS3_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARS3_update(dt_ms, &bridge->state, &ARS3_g_int_state, out);
    /* TODO: map ARS3 outputs to global actuators (Active Rear Steering) */
}
