#include "DFMintegration.h"
#include <string.h>

static DFM_State DFM_g_int_state;

void DFM_integration_init(void) {
    memset(&DFM_g_int_state, 0, sizeof(DFM_g_int_state));
}

void DFM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DFM_update(dt_ms, &bridge->state, &DFM_g_int_state, out);
    /* TODO: map DFM outputs to global actuators (Differential Map Control) */
}
