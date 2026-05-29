#include "AFCintegration.h"
#include <string.h>

static AFC_State AFC_g_int_state;

void AFC_integration_init(void) {
    memset(&AFC_g_int_state, 0, sizeof(AFC_g_int_state));
}

void AFC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFC_update(dt_ms, &bridge->state, &AFC_g_int_state, out);
    /* TODO: map AFC outputs to global actuators (Active Floor Clearance Control) */
}
