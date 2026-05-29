#include "BTMintegration.h"
#include <string.h>

static BTM_State BTM_g_int_state;

void BTM_integration_init(void) {
    memset(&BTM_g_int_state, 0, sizeof(BTM_g_int_state));
}

void BTM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BTM_update(dt_ms, &bridge->state, &BTM_g_int_state, out);
    /* TODO: map BTM outputs to global actuators (Battery Thermal Management) */
}
