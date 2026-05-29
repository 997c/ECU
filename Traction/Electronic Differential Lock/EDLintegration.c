#include "EDLintegration.h"
#include <string.h>

static EDL_State EDL_g_int_state;

void EDL_integration_init(void) {
    memset(&EDL_g_int_state, 0, sizeof(EDL_g_int_state));
}

void EDL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EDL_update(dt_ms, &bridge->state, &EDL_g_int_state, out);
    /* TODO: map EDL outputs to global actuators (Electronic Differential Lock) */
}
