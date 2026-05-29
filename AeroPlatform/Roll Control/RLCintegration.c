#include "RLCintegration.h"
#include <string.h>

static RLC_State RLC_g_int_state;

void RLC_integration_init(void) {
    memset(&RLC_g_int_state, 0, sizeof(RLC_g_int_state));
}

void RLC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    RLC_update(dt_ms, &bridge->state, &RLC_g_int_state, out);
    /* TODO: map RLC outputs to global actuators (Roll Control) */
}
