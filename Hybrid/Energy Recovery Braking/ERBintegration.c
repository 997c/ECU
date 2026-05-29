#include "ERBintegration.h"
#include <string.h>

static ERB_State ERB_g_int_state;

void ERB_integration_init(void) {
    memset(&ERB_g_int_state, 0, sizeof(ERB_g_int_state));
}

void ERB_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ERB_update(dt_ms, &bridge->state, &ERB_g_int_state, out);
    /* TODO: map ERB outputs to global actuators (Energy Recovery Braking) */
}
