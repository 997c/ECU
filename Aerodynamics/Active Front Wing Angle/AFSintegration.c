#include "AFSintegration.h"
#include <string.h>

static AFS_State AFS_g_int_state;

void AFS_integration_init(void) {
    memset(&AFS_g_int_state, 0, sizeof(AFS_g_int_state));
}

void AFS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFS_update(dt_ms, &bridge->state, &AFS_g_int_state, out);
    /* TODO: map AFS outputs to global actuators (Active Front Wing Angle) */
}
