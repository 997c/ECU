#include "SSEintegration.h"
#include <string.h>

static SSE_State SSE_g_int_state;

void SSE_integration_init(void) {
    memset(&SSE_g_int_state, 0, sizeof(SSE_g_int_state));
}

void SSE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SSE_update(dt_ms, &bridge->state, &SSE_g_int_state, out);
    /* TODO: map SSE outputs to global actuators (Sideslip Angle Estimation) */
}
