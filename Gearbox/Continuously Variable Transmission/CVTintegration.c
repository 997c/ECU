#include "CVTintegration.h"
#include <string.h>

static CVT_State CVT_g_int_state;

void CVT_integration_init(void) {
    memset(&CVT_g_int_state, 0, sizeof(CVT_g_int_state));
}

void CVT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    CVT_update(dt_ms, &bridge->state, &CVT_g_int_state, out);
    /* TODO: map CVT outputs to global actuators (Continuously Variable Transmission) */
}
