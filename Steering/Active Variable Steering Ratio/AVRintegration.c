#include "AVRintegration.h"
#include <string.h>

static AVR_State AVR_g_int_state;

void AVR_integration_init(void) {
    memset(&AVR_g_int_state, 0, sizeof(AVR_g_int_state));
}

void AVR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AVR_update(dt_ms, &bridge->state, &AVR_g_int_state, out);
    /* TODO: map AVR outputs to global actuators (Active Variable Steering Ratio) */
}
