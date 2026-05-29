#include "ATCintegration.h"
#include <string.h>

static ATC_State ATC_g_int_state;

void ATC_integration_init(void) {
    memset(&ATC_g_int_state, 0, sizeof(ATC_g_int_state));
}

void ATC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ATC_update(dt_ms, &bridge->state, &ATC_g_int_state, out);
    /* TODO: map ATC outputs to global actuators (Active Toe Control) */
}
