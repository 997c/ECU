#include "CBPintegration.h"
#include <string.h>

static CBP_State CBP_g_int_state;

void CBP_integration_init(void) {
    memset(&CBP_g_int_state, 0, sizeof(CBP_g_int_state));
}

void CBP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    CBP_update(dt_ms, &bridge->state, &CBP_g_int_state, out);
    /* TODO: map CBP outputs to global actuators (Clutch Bite-Point Control) */
}
