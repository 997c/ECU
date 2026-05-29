#include "MDMintegration.h"
#include <string.h>

static MDM_State MDM_g_int_state;

void MDM_integration_init(void) {
    memset(&MDM_g_int_state, 0, sizeof(MDM_g_int_state));
}

void MDM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    MDM_update(dt_ms, &bridge->state, &MDM_g_int_state, out);
    /* TODO: map MDM outputs to global actuators (Mid-Corner Diff Map) */
}
