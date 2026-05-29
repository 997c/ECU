#include "SOCintegration.h"
#include <string.h>

static SOC_State SOC_g_int_state;

void SOC_integration_init(void) {
    memset(&SOC_g_int_state, 0, sizeof(SOC_g_int_state));
}

void SOC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SOC_update(dt_ms, &bridge->state, &SOC_g_int_state, out);
    /* TODO: map SOC outputs to global actuators (State of Charge Management) */
}
