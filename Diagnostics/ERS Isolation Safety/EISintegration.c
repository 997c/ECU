#include "EISintegration.h"
#include <string.h>

static EIS_State EIS_g_int_state;

void EIS_integration_init(void) {
    memset(&EIS_g_int_state, 0, sizeof(EIS_g_int_state));
}

void EIS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EIS_update(dt_ms, &bridge->state, &EIS_g_int_state, out);
    /* TODO: map EIS outputs to global actuators (ERS Isolation Safety) */
}
