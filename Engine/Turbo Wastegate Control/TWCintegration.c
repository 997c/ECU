#include "TWCintegration.h"
#include <string.h>

static TWC_State TWC_g_int_state;

void TWC_integration_init(void) {
    memset(&TWC_g_int_state, 0, sizeof(TWC_g_int_state));
}

void TWC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TWC_update(dt_ms, &bridge->state, &TWC_g_int_state, out);
    /* TODO: map TWC outputs to global actuators (Turbo Wastegate Control) */
}
