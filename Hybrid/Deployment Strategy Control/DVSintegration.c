#include "DVSintegration.h"
#include <string.h>

static DVS_State DVS_g_int_state;

void DVS_integration_init(void) {
    memset(&DVS_g_int_state, 0, sizeof(DVS_g_int_state));
}

void DVS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DVS_update(dt_ms, &bridge->state, &DVS_g_int_state, out);
    /* TODO: map DVS outputs to global actuators (Deployment Strategy Control) */
}
