#include "MGKintegration.h"
#include <string.h>

static MGK_State MGK_g_int_state;

void MGK_integration_init(void) {
    memset(&MGK_g_int_state, 0, sizeof(MGK_g_int_state));
}

void MGK_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    MGK_update(dt_ms, &bridge->state, &MGK_g_int_state, out);
    /* TODO: map MGK outputs to global actuators (MGU-K Torque Blend Control) */
}
