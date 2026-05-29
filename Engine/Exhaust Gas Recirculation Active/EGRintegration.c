#include "EGRintegration.h"
#include <string.h>

static EGR_State EGR_g_int_state;

void EGR_integration_init(void) {
    memset(&EGR_g_int_state, 0, sizeof(EGR_g_int_state));
}

void EGR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EGR_update(dt_ms, &bridge->state, &EGR_g_int_state, out);
    /* TODO: map EGR outputs to global actuators (Exhaust Gas Recirculation Active) */
}
