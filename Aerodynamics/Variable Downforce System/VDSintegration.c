#include "VDSintegration.h"
#include <string.h>

static VDS_State VDS_g_int_state;

void VDS_integration_init(void) {
    memset(&VDS_g_int_state, 0, sizeof(VDS_g_int_state));
}

void VDS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VDS_update(dt_ms, &bridge->state, &VDS_g_int_state, out);
    /* TODO: map VDS outputs to global actuators (Variable Downforce System) */
}
