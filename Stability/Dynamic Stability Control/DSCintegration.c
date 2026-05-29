#include "DSCintegration.h"
#include <string.h>

static DSC_State DSC_g_int_state;

void DSC_integration_init(void) {
    memset(&DSC_g_int_state, 0, sizeof(DSC_g_int_state));
}

void DSC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DSC_update(dt_ms, &bridge->state, &DSC_g_int_state, out);
    /* TODO: map DSC outputs to global actuators (Dynamic Stability Control) */
}
