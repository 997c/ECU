#include "EBD2integration.h"
#include <string.h>

static EBD2_State EBD2_g_int_state;

void EBD2_integration_init(void) {
    memset(&EBD2_g_int_state, 0, sizeof(EBD2_g_int_state));
}

void EBD2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EBD2_update(dt_ms, &bridge->state, &EBD2_g_int_state, out);
    /* TODO: map EBD2 outputs to global actuators (Exhaust Blown Diffuser) */
}
