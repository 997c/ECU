#include "ADS2integration.h"
#include <string.h>

static ADS2_State ADS2_g_int_state;

void ADS2_integration_init(void) {
    memset(&ADS2_g_int_state, 0, sizeof(ADS2_g_int_state));
}

void ADS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ADS2_update(dt_ms, &bridge->state, &ADS2_g_int_state, out);
    /* TODO: map ADS2 outputs to global actuators (Active Dive Suppression) */
}
