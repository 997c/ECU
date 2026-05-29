#include "UTRintegration.h"
#include <string.h>

static UTR_State UTR_g_int_state;

void UTR_integration_init(void) {
    memset(&UTR_g_int_state, 0, sizeof(UTR_g_int_state));
}

void UTR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    UTR_update(dt_ms, &bridge->state, &UTR_g_int_state, out);
    /* TODO: map UTR outputs to global actuators (Upshift Torque Recovery) */
}
