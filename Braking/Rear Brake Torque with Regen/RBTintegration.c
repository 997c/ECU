#include "RBTintegration.h"
#include <string.h>

static RBT_State RBT_g_int_state;

void RBT_integration_init(void) {
    memset(&RBT_g_int_state, 0, sizeof(RBT_g_int_state));
}

void RBT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RBT_update(dt_ms, &bridge->state, &RBT_g_int_state, out);
    /* TODO: map RBT outputs to global actuators (Rear Brake Torque with Regen) */
}
