#include "SLAintegration.h"
#include <string.h>

static SLA_State SLA_g_int_state;

void SLA_integration_init(void) {
    memset(&SLA_g_int_state, 0, sizeof(SLA_g_int_state));
}

void SLA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SLA_update(dt_ms, &bridge->state, &SLA_g_int_state, out);
    /* TODO: map SLA outputs to global actuators (Slip Angle Target Control) */
}
