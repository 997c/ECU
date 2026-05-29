#include "DRSintegration.h"
#include <string.h>

static DRS_State DRS_g_int_state;

void DRS_integration_init(void) {
    memset(&DRS_g_int_state, 0, sizeof(DRS_g_int_state));
}

void DRS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DRS_update(dt_ms, &bridge->state, &DRS_g_int_state, out);
    /* TODO: map DRS outputs to global actuators (Drag Reduction System) */
}
