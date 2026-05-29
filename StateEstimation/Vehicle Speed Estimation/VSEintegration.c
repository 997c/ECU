#include "VSEintegration.h"
#include <string.h>

static VSE_State VSE_g_int_state;

void VSE_integration_init(void) {
    memset(&VSE_g_int_state, 0, sizeof(VSE_g_int_state));
}

void VSE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VSE_update(dt_ms, &bridge->state, &VSE_g_int_state, out);
    /* TODO: map VSE outputs to global actuators (Vehicle Speed Estimation) */
}
