#include "ABPintegration.h"
#include <string.h>

static ABP_State ABP_g_int_state;

void ABP_integration_init(void) {
    memset(&ABP_g_int_state, 0, sizeof(ABP_g_int_state));
}

void ABP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABP_update(dt_ms, &bridge->state, &ABP_g_int_state, out);
    /* TODO: map ABP outputs to global actuators (Automatic Brake Pressure Modulation) */
}
