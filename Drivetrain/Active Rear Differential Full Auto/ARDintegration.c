#include "ARDintegration.h"
#include <string.h>

static ARD_State ARD_g_int_state;

void ARD_integration_init(void) {
    memset(&ARD_g_int_state, 0, sizeof(ARD_g_int_state));
}

void ARD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARD_update(dt_ms, &bridge->state, &ARD_g_int_state, out);
    /* TODO: map ARD outputs to global actuators (Active Rear Differential Full Auto) */
}
