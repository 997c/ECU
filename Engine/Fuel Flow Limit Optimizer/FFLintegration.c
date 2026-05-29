#include "FFLintegration.h"
#include <string.h>

static FFL_State FFL_g_int_state;

void FFL_integration_init(void) {
    memset(&FFL_g_int_state, 0, sizeof(FFL_g_int_state));
}

void FFL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FFL_update(dt_ms, &bridge->state, &FFL_g_int_state, out);
    /* TODO: map FFL outputs to global actuators (Fuel Flow Limit Optimizer) */
}
