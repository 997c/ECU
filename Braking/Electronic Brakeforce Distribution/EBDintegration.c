#include "EBDintegration.h"
#include <string.h>

static EBD_State EBD_g_int_state;

void EBD_integration_init(void) {
    memset(&EBD_g_int_state, 0, sizeof(EBD_g_int_state));
}

void EBD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EBD_update(dt_ms, &bridge->state, &EBD_g_int_state, out);
    /* TODO: map EBD outputs to global actuators (Electronic Brakeforce Distribution) */
}
