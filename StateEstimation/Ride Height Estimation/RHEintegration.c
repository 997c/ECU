#include "RHEintegration.h"
#include <string.h>

static RHE_State RHE_g_int_state;

void RHE_integration_init(void) {
    memset(&RHE_g_int_state, 0, sizeof(RHE_g_int_state));
}

void RHE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RHE_update(dt_ms, &bridge->state, &RHE_g_int_state, out);
    /* TODO: map RHE outputs to global actuators (Ride Height Estimation) */
}
