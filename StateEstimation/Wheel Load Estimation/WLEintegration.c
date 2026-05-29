#include "WLEintegration.h"
#include <string.h>

static WLE_State WLE_g_int_state;

void WLE_integration_init(void) {
    memset(&WLE_g_int_state, 0, sizeof(WLE_g_int_state));
}

void WLE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    WLE_update(dt_ms, &bridge->state, &WLE_g_int_state, out);
    /* TODO: map WLE outputs to global actuators (Wheel Load Estimation) */
}
