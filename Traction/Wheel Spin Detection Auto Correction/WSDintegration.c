#include "WSDintegration.h"
#include <string.h>

static WSD_State WSD_g_int_state;

void WSD_integration_init(void) {
    memset(&WSD_g_int_state, 0, sizeof(WSD_g_int_state));
}

void WSD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    WSD_update(dt_ms, &bridge->state, &WSD_g_int_state, out);
    /* TODO: map WSD outputs to global actuators (Wheel Spin Detection Auto Correction) */
}
