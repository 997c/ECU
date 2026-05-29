#include "USCintegration.h"
#include <string.h>

static USC_State USC_g_int_state;

void USC_integration_init(void) {
    memset(&USC_g_int_state, 0, sizeof(USC_g_int_state));
}

void USC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    USC_update(dt_ms, &bridge->state, &USC_g_int_state, out);
    /* TODO: map USC outputs to global actuators (Understeer Control Auto) */
}
