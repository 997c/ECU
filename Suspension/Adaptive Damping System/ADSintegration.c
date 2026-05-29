#include "ADSintegration.h"
#include <string.h>

static ADS_State ADS_g_int_state;

void ADS_integration_init(void) {
    memset(&ADS_g_int_state, 0, sizeof(ADS_g_int_state));
}

void ADS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ADS_update(dt_ms, &bridge->state, &ADS_g_int_state, out);
    /* TODO: map ADS outputs to global actuators (Adaptive Damping System) */
}
