#include "FSAintegration.h"
#include <string.h>

static FSA_State FSA_g_int_state;

void FSA_integration_init(void) {
    memset(&FSA_g_int_state, 0, sizeof(FSA_g_int_state));
}

void FSA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FSA_update(dt_ms, &bridge->state, &FSA_g_int_state, out);
    /* TODO: map FSA outputs to global actuators (Floor Stall Avoidance) */
}
