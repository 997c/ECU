#include "RCSintegration.h"
#include <string.h>

static RCS_State RCS_g_int_state;

void RCS_integration_init(void) {
    memset(&RCS_g_int_state, 0, sizeof(RCS_g_int_state));
}

void RCS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RCS_update(dt_ms, &bridge->state, &RCS_g_int_state, out);
    /* TODO: map RCS outputs to global actuators (Regenerative Cornering Strategy Auto) */
}
