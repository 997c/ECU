#include "AHSintegration.h"
#include <string.h>

static AHS_State AHS_g_int_state;

void AHS_integration_init(void) {
    memset(&AHS_g_int_state, 0, sizeof(AHS_g_int_state));
}

void AHS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AHS_update(dt_ms, &bridge->state, &AHS_g_int_state, out);
    /* TODO: map AHS outputs to global actuators (Active Hydraulic Suspension) */
}
