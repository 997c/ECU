#include "RBAintegration.h"
#include <string.h>

static RBA_State RBA_g_int_state;

void RBA_integration_init(void) {
    memset(&RBA_g_int_state, 0, sizeof(RBA_g_int_state));
}

void RBA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RBA_update(dt_ms, &bridge->state, &RBA_g_int_state, out);
    /* TODO: map RBA outputs to global actuators (Regenerative Brake Assist Auto) */
}
