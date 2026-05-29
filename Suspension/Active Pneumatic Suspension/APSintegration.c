#include "APSintegration.h"
#include <string.h>

static APS_State APS_g_int_state;

void APS_integration_init(void) {
    memset(&APS_g_int_state, 0, sizeof(APS_g_int_state));
}

void APS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    APS_update(dt_ms, &bridge->state, &APS_g_int_state, out);
    /* TODO: map APS outputs to global actuators (Active Pneumatic Suspension) */
}
