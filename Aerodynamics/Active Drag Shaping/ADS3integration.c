#include "ADS3integration.h"
#include <string.h>

static ADS3_State ADS3_g_int_state;

void ADS3_integration_init(void) {
    memset(&ADS3_g_int_state, 0, sizeof(ADS3_g_int_state));
}

void ADS3_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ADS3_update(dt_ms, &bridge->state, &ADS3_g_int_state, out);
    /* TODO: map ADS3 outputs to global actuators (Active Drag Shaping) */
}
