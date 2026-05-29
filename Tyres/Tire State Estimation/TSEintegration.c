#include "TSEintegration.h"
#include <string.h>

static TSE_State TSE_g_int_state;

void TSE_integration_init(void) {
    memset(&TSE_g_int_state, 0, sizeof(TSE_g_int_state));
}

void TSE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TSE_update(dt_ms, &bridge->state, &TSE_g_int_state, out);
    /* TODO: map TSE outputs to global actuators (Tire State Estimation) */
}
