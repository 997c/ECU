#include "TFEintegration.h"
#include <string.h>

static TFE_State TFE_g_int_state;

void TFE_integration_init(void) {
    memset(&TFE_g_int_state, 0, sizeof(TFE_g_int_state));
}

void TFE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TFE_update(dt_ms, &bridge->state, &TFE_g_int_state, out);
    /* TODO: map TFE outputs to global actuators (Tire Friction Estimation) */
}
