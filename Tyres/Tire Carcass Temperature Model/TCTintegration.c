#include "TCTintegration.h"
#include <string.h>

static TCT_State TCT_g_int_state;

void TCT_integration_init(void) {
    memset(&TCT_g_int_state, 0, sizeof(TCT_g_int_state));
}

void TCT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TCT_update(dt_ms, &bridge->state, &TCT_g_int_state, out);
    /* TODO: map TCT outputs to global actuators (Tire Carcass Temperature Model) */
}
