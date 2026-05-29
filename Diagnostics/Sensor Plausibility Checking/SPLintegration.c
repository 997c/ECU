#include "SPLintegration.h"
#include <string.h>

static SPL_State SPL_g_int_state;

void SPL_integration_init(void) {
    memset(&SPL_g_int_state, 0, sizeof(SPL_g_int_state));
}

void SPL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SPL_update(dt_ms, &bridge->state, &SPL_g_int_state, out);
    /* TODO: map SPL outputs to global actuators (Sensor Plausibility Checking) */
}
