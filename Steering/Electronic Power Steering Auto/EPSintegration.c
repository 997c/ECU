#include "EPSintegration.h"
#include <string.h>

static EPS_State EPS_g_int_state;

void EPS_integration_init(void) {
    memset(&EPS_g_int_state, 0, sizeof(EPS_g_int_state));
}

void EPS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EPS_update(dt_ms, &bridge->state, &EPS_g_int_state, out);
    /* TODO: map EPS outputs to global actuators (Electronic Power Steering Auto) */
}
