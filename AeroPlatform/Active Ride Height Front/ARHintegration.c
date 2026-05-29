#include "ARHintegration.h"
#include <string.h>

static ARH_State ARH_g_int_state;

void ARH_integration_init(void) {
    memset(&ARH_g_int_state, 0, sizeof(ARH_g_int_state));
}

void ARH_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARH_update(dt_ms, &bridge->state, &ARH_g_int_state, out);
    /* TODO: map ARH outputs to global actuators (Active Ride Height Front) */
}
