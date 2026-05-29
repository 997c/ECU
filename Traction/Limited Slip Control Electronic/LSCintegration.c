#include "LSCintegration.h"
#include <string.h>

static LSC_State LSC_g_int_state;

void LSC_integration_init(void) {
    memset(&LSC_g_int_state, 0, sizeof(LSC_g_int_state));
}

void LSC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    LSC_update(dt_ms, &bridge->state, &LSC_g_int_state, out);
    /* TODO: map LSC outputs to global actuators (Limited Slip Control Electronic) */
}
