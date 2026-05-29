#include "TDEintegration.h"
#include <string.h>

static TDE_State TDE_g_int_state;

void TDE_integration_init(void) {
    memset(&TDE_g_int_state, 0, sizeof(TDE_g_int_state));
}

void TDE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TDE_update(dt_ms, &bridge->state, &TDE_g_int_state, out);
    /* TODO: map TDE outputs to global actuators (Tire Degradation Estimate) */
}
