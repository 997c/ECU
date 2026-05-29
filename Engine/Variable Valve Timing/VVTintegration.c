#include "VVTintegration.h"
#include <string.h>

static VVT_State VVT_g_int_state;

void VVT_integration_init(void) {
    memset(&VVT_g_int_state, 0, sizeof(VVT_g_int_state));
}

void VVT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VVT_update(dt_ms, &bridge->state, &VVT_g_int_state, out);
    /* TODO: map VVT outputs to global actuators (Variable Valve Timing) */
}
