#include "ABDintegration.h"
#include <string.h>

static ABD_State ABD_g_int_state;

void ABD_integration_init(void) {
    memset(&ABD_g_int_state, 0, sizeof(ABD_g_int_state));
}

void ABD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABD_update(dt_ms, &bridge->state, &ABD_g_int_state, out);
    /* TODO: map ABD outputs to global actuators (Active Brake Duct Control) */
}
