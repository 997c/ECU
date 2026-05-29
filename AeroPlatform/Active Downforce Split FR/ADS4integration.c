#include "ADS4integration.h"
#include <string.h>

static ADS4_State ADS4_g_int_state;

void ADS4_integration_init(void) {
    memset(&ADS4_g_int_state, 0, sizeof(ADS4_g_int_state));
}

void ADS4_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ADS4_update(dt_ms, &bridge->state, &ADS4_g_int_state, out);
    /* TODO: map ADS4 outputs to global actuators (Active Downforce Split FR) */
}
