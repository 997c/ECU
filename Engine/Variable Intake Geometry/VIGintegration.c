#include "VIGintegration.h"
#include <string.h>

static VIG_State VIG_g_int_state;

void VIG_integration_init(void) {
    memset(&VIG_g_int_state, 0, sizeof(VIG_g_int_state));
}

void VIG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VIG_update(dt_ms, &bridge->state, &VIG_g_int_state, out);
    /* TODO: map VIG outputs to global actuators (Variable Intake Geometry) */
}
