#include "GASintegration.h"
#include <string.h>

static GAS_State GAS_g_int_state;

void GAS_integration_init(void) {
    memset(&GAS_g_int_state, 0, sizeof(GAS_g_int_state));
}

void GAS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    GAS_update(dt_ms, &bridge->state, &GAS_g_int_state, out);
    /* TODO: map GAS outputs to global actuators (Ground Effect Active Sealing) */
}
