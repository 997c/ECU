#include "AWSintegration.h"
#include <string.h>

static AWS_State AWS_g_int_state;

void AWS_integration_init(void) {
    memset(&AWS_g_int_state, 0, sizeof(AWS_g_int_state));
}

void AWS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AWS_update(dt_ms, &bridge->state, &AWS_g_int_state, out);
    /* TODO: map AWS outputs to global actuators (All-Wheel Steering) */
}
