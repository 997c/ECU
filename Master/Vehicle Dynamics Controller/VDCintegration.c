#include "VDCintegration.h"
#include <string.h>

static VDC_State VDC_g_int_state;

void VDC_integration_init(void) {
    memset(&VDC_g_int_state, 0, sizeof(VDC_g_int_state));
}

void VDC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VDC_update(dt_ms, &bridge->state, &VDC_g_int_state, out);
    /* TODO: map VDC outputs to global actuators (Vehicle Dynamics Controller) */
}
