#include "HVSintegration.h"
#include <string.h>

static HVS_State HVS_g_int_state;

void HVS_integration_init(void) {
    memset(&HVS_g_int_state, 0, sizeof(HVS_g_int_state));
}

void HVS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    HVS_update(dt_ms, &bridge->state, &HVS_g_int_state, out);
    /* TODO: map HVS outputs to global actuators (Harvest Strategy Control) */
}
