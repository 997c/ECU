#include "AVSintegration.h"
#include <string.h>

static AVS_State AVS_g_int_state;

void AVS_integration_init(void) {
    memset(&AVS_g_int_state, 0, sizeof(AVS_g_int_state));
}

void AVS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AVS_update(dt_ms, &bridge->state, &AVS_g_int_state, out);
    /* TODO: map AVS outputs to global actuators (Active Vehicle Squat Control) */
}
