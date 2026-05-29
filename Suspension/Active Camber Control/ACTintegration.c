#include "ACTintegration.h"
#include <string.h>

static ACT_State ACT_g_int_state;

void ACT_integration_init(void) {
    memset(&ACT_g_int_state, 0, sizeof(ACT_g_int_state));
}

void ACT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ACT_update(dt_ms, &bridge->state, &ACT_g_int_state, out);
    /* TODO: map ACT outputs to global actuators (Active Camber Control) */
}
