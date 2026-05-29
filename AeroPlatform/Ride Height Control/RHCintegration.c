#include "RHCintegration.h"
#include <string.h>

static RHC_State RHC_g_int_state;

void RHC_integration_init(void) {
    memset(&RHC_g_int_state, 0, sizeof(RHC_g_int_state));
}

void RHC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RHC_update(dt_ms, &bridge->state, &RHC_g_int_state, out);
    /* TODO: map RHC outputs to global actuators (Ride Height Control) */
}
