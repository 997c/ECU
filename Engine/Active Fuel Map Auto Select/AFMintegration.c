#include "AFMintegration.h"
#include <string.h>

static AFM_State AFM_g_int_state;

void AFM_integration_init(void) {
    memset(&AFM_g_int_state, 0, sizeof(AFM_g_int_state));
}

void AFM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFM_update(dt_ms, &bridge->state, &AFM_g_int_state, out);
    /* TODO: map AFM outputs to global actuators (Active Fuel Map Auto Select) */
}
