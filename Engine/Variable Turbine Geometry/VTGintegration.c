#include "VTGintegration.h"
#include <string.h>

static VTG_State VTG_g_int_state;

void VTG_integration_init(void) {
    memset(&VTG_g_int_state, 0, sizeof(VTG_g_int_state));
}

void VTG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VTG_update(dt_ms, &bridge->state, &VTG_g_int_state, out);
    /* TODO: map VTG outputs to global actuators (Variable Turbine Geometry) */
}
