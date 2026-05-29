#include "ABS3integration.h"
#include <string.h>

static ABS3_State ABS3_g_int_state;

void ABS3_integration_init(void) {
    memset(&ABS3_g_int_state, 0, sizeof(ABS3_g_int_state));
}

void ABS3_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABS3_update(dt_ms, &bridge->state, &ABS3_g_int_state, out);
    /* TODO: map ABS3 outputs to global actuators (Active Bounce Suppression) */
}
