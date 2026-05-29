#include "ABSintegration.h"
#include <string.h>

static ABS_State ABS_g_int_state;

void ABS_integration_init(void) {
    memset(&ABS_g_int_state, 0, sizeof(ABS_g_int_state));
}

void ABS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABS_update(dt_ms, &bridge->state, &ABS_g_int_state, out);
    /* TODO: map ABS outputs to global actuators (Anti-lock Braking System) */
}
