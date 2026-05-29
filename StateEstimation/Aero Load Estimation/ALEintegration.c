#include "ALEintegration.h"
#include <string.h>

static ALE_State ALE_g_int_state;

void ALE_integration_init(void) {
    memset(&ALE_g_int_state, 0, sizeof(ALE_g_int_state));
}

void ALE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ALE_update(dt_ms, &bridge->state, &ALE_g_int_state, out);
    /* TODO: map ALE outputs to global actuators (Aero Load Estimation) */
}
