#include "VGT2integration.h"
#include <string.h>

static VGT2_State VGT2_g_int_state;

void VGT2_integration_init(void) {
    memset(&VGT2_g_int_state, 0, sizeof(VGT2_g_int_state));
}

void VGT2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VGT2_update(dt_ms, &bridge->state, &VGT2_g_int_state, out);
    /* TODO: map VGT2 outputs to global actuators (Variable Geometry Tunnels) */
}
