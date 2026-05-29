#include "AUSintegration.h"
#include <string.h>

static AUS_State AUS_g_int_state;

void AUS_integration_init(void) {
    memset(&AUS_g_int_state, 0, sizeof(AUS_g_int_state));
}

void AUS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AUS_update(dt_ms, &bridge->state, &AUS_g_int_state, out);
    /* TODO: map AUS outputs to global actuators (Active Underbody Sealing) */
}
