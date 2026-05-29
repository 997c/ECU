#include "AVTintegration.h"
#include <string.h>

static AVT_State AVT_g_int_state;

void AVT_integration_init(void) {
    memset(&AVT_g_int_state, 0, sizeof(AVT_g_int_state));
}

void AVT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AVT_update(dt_ms, &bridge->state, &AVT_g_int_state, out);
    /* TODO: map AVT outputs to global actuators (Active Valve Timing Full Control) */
}
