#include "VSCintegration.h"
#include <string.h>

static VSC_State VSC_g_int_state;

void VSC_integration_init(void) {
    memset(&VSC_g_int_state, 0, sizeof(VSC_g_int_state));
}

void VSC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VSC_update(dt_ms, &bridge->state, &VSC_g_int_state, out);
    /* TODO: map VSC outputs to global actuators (Vehicle Stability Control) */
}
