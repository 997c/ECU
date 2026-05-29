#include "ARH2integration.h"
#include <string.h>

static ARH2_State ARH2_g_int_state;

void ARH2_integration_init(void) {
    memset(&ARH2_g_int_state, 0, sizeof(ARH2_g_int_state));
}

void ARH2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARH2_update(dt_ms, &bridge->state, &ARH2_g_int_state, out);
    /* TODO: map ARH2 outputs to global actuators (Active Ride Height Rear) */
}
