#include "AYCintegration.h"
#include <string.h>

static AYC_State AYC_g_int_state;

void AYC_integration_init(void) {
    memset(&AYC_g_int_state, 0, sizeof(AYC_g_int_state));
}

void AYC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AYC_update(dt_ms, &bridge->state, &AYC_g_int_state, out);
    /* TODO: map AYC outputs to global actuators (Active Yaw Control) */
}
