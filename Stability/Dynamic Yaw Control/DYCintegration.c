#include "DYCintegration.h"
#include <string.h>

static DYC_State DYC_g_int_state;

void DYC_integration_init(void) {
    memset(&DYC_g_int_state, 0, sizeof(DYC_g_int_state));
}

void DYC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DYC_update(dt_ms, &bridge->state, &DYC_g_int_state, out);
    /* TODO: map DYC outputs to global actuators (Dynamic Yaw Control) */
}
