#include "PAAintegration.h"
#include <string.h>

static PAA_State PAA_g_int_state;

void PAA_integration_init(void) {
    memset(&PAA_g_int_state, 0, sizeof(PAA_g_int_state));
}

void PAA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    PAA_update(dt_ms, &bridge->state, &PAA_g_int_state, out);
    /* TODO: map PAA outputs to global actuators (Active Aerodynamics Porsche-style) */
}
