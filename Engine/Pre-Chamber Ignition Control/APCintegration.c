#include "APCintegration.h"
#include <string.h>

static APC_State APC_g_int_state;

void APC_integration_init(void) {
    memset(&APC_g_int_state, 0, sizeof(APC_g_int_state));
}

void APC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    APC_update(dt_ms, &bridge->state, &APC_g_int_state, out);
    /* TODO: map APC outputs to global actuators (Pre-Chamber Ignition Control) */
}
