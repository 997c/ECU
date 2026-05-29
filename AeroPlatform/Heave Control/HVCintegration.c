#include "HVCintegration.h"
#include <string.h>

static HVC_State HVC_g_int_state;

void HVC_integration_init(void) {
    memset(&HVC_g_int_state, 0, sizeof(HVC_g_int_state));
}

void HVC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    HVC_update(dt_ms, &bridge->state, &HVC_g_int_state, out);
    /* TODO: map HVC outputs to global actuators (Heave Control) */
}
