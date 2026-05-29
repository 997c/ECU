#include "VVLintegration.h"
#include <string.h>

static VVL_State VVL_g_int_state;

void VVL_integration_init(void) {
    memset(&VVL_g_int_state, 0, sizeof(VVL_g_int_state));
}

void VVL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VVL_update(dt_ms, &bridge->state, &VVL_g_int_state, out);
    /* TODO: map VVL outputs to global actuators (Variable Valve Lift) */
}
