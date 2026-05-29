#include "AFDintegration.h"
#include <string.h>

static AFD_State AFD_g_int_state;

void AFD_integration_init(void) {
    memset(&AFD_g_int_state, 0, sizeof(AFD_g_int_state));
}

void AFD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFD_update(dt_ms, &bridge->state, &AFD_g_int_state, out);
    /* TODO: map AFD outputs to global actuators (Active Front Differential) */
}
