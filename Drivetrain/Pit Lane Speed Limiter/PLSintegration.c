#include "PLSintegration.h"
#include <string.h>

static PLS_State PLS_g_int_state;

void PLS_integration_init(void) {
    memset(&PLS_g_int_state, 0, sizeof(PLS_g_int_state));
}

void PLS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    PLS_update(dt_ms, &bridge->state, &PLS_g_int_state, out);
    /* TODO: map PLS outputs to global actuators (Pit Lane Speed Limiter) */
}
