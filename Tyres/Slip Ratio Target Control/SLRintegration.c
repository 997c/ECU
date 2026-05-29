#include "SLRintegration.h"
#include <string.h>

static SLR_State SLR_g_int_state;

void SLR_integration_init(void) {
    memset(&SLR_g_int_state, 0, sizeof(SLR_g_int_state));
}

void SLR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SLR_update(dt_ms, &bridge->state, &SLR_g_int_state, out);
    /* TODO: map SLR outputs to global actuators (Slip Ratio Target Control) */
}
