#include "BBWintegration.h"
#include <string.h>

static BBW_State BBW_g_int_state;

void BBW_integration_init(void) {
    memset(&BBW_g_int_state, 0, sizeof(BBW_g_int_state));
}

void BBW_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BBW_update(dt_ms, &bridge->state, &BBW_g_int_state, out);
    /* TODO: map BBW outputs to global actuators (Brake-by-Wire) */
}
