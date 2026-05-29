#include "AKSintegration.h"
#include <string.h>

static AKS_State AKS_g_int_state;

void AKS_integration_init(void) {
    memset(&AKS_g_int_state, 0, sizeof(AKS_g_int_state));
}

void AKS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AKS_update(dt_ms, &bridge->state, &AKS_g_int_state, out);
    /* TODO: map AKS outputs to global actuators (Active Kinetic Suspension) */
}
