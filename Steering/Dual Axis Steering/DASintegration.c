#include "DASintegration.h"
#include <string.h>

static DAS_State DAS_g_int_state;

void DAS_integration_init(void) {
    memset(&DAS_g_int_state, 0, sizeof(DAS_g_int_state));
}

void DAS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DAS_update(dt_ms, &bridge->state, &DAS_g_int_state, out);
    /* TODO: map DAS outputs to global actuators (Dual Axis Steering) */
}
