#include "ARSintegration.h"
#include <string.h>

static ARS_State ARS_g_int_state;

void ARS_integration_init(void) {
    memset(&ARS_g_int_state, 0, sizeof(ARS_g_int_state));
}

void ARS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARS_update(dt_ms, &bridge->state, &ARS_g_int_state, out);
    /* TODO: map ARS outputs to global actuators (Active Rear Spoiler) */
}
