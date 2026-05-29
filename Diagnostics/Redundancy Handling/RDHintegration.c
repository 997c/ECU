#include "RDHintegration.h"
#include <string.h>

static RDH_State RDH_g_int_state;

void RDH_integration_init(void) {
    memset(&RDH_g_int_state, 0, sizeof(RDH_g_int_state));
}

void RDH_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RDH_update(dt_ms, &bridge->state, &RDH_g_int_state, out);
    /* TODO: map RDH outputs to global actuators (Redundancy Handling) */
}
