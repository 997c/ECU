#include "TGEintegration.h"
#include <string.h>

static TGE_State TGE_g_int_state;

void TGE_integration_init(void) {
    memset(&TGE_g_int_state, 0, sizeof(TGE_g_int_state));
}

void TGE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TGE_update(dt_ms, &bridge->state, &TGE_g_int_state, out);
    /* TODO: map TGE outputs to global actuators (Tire Grip Coefficient Estimate) */
}
