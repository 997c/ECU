#include "CBCintegration.h"
#include <string.h>

static CBC_State CBC_g_int_state;

void CBC_integration_init(void) {
    memset(&CBC_g_int_state, 0, sizeof(CBC_g_int_state));
}

void CBC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    CBC_update(dt_ms, &bridge->state, &CBC_g_int_state, out);
    /* TODO: map CBC outputs to global actuators (Cornering Brake Control) */
}
