#include "AKRintegration.h"
#include <string.h>

static AKR_State AKR_g_int_state;

void AKR_integration_init(void) {
    memset(&AKR_g_int_state, 0, sizeof(AKR_g_int_state));
}

void AKR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AKR_update(dt_ms, &bridge->state, &AKR_g_int_state, out);
    /* TODO: map AKR outputs to global actuators (Auto Kinetic Recovery) */
}
