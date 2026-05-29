#include "LCintegration.h"
#include <string.h>

static LC_State LC_g_int_state;

void LC_integration_init(void) {
    memset(&LC_g_int_state, 0, sizeof(LC_g_int_state));
}

void LC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    LC_update(dt_ms, &bridge->state, &LC_g_int_state, out);
    /* TODO: map LC outputs to global actuators (Launch Control) */
}
