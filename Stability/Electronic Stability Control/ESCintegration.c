#include "ESCintegration.h"
#include <string.h>

static ESC_State ESC_g_int_state;

void ESC_integration_init(void) {
    memset(&ESC_g_int_state, 0, sizeof(ESC_g_int_state));
}

void ESC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ESC_update(dt_ms, &bridge->state, &ESC_g_int_state, out);
    /* TODO: map ESC outputs to global actuators (Electronic Stability Control) */
}
