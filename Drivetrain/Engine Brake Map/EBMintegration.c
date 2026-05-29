#include "EBMintegration.h"
#include <string.h>

static EBM_State EBM_g_int_state;

void EBM_integration_init(void) {
    memset(&EBM_g_int_state, 0, sizeof(EBM_g_int_state));
}

void EBM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EBM_update(dt_ms, &bridge->state, &EBM_g_int_state, out);
    /* TODO: map EBM outputs to global actuators (Engine Brake Map) */
}
