#include "ARCintegration.h"
#include <string.h>

static ARC_State ARC_g_int_state;

void ARC_integration_init(void) {
    memset(&ARC_g_int_state, 0, sizeof(ARC_g_int_state));
}

void ARC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARC_update(dt_ms, &bridge->state, &ARC_g_int_state, out);
    /* TODO: map ARC outputs to global actuators (Active Roll Control) */
}
