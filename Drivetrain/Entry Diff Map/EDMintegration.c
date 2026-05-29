#include "EDMintegration.h"
#include <string.h>

static EDM_State EDM_g_int_state;

void EDM_integration_init(void) {
    memset(&EDM_g_int_state, 0, sizeof(EDM_g_int_state));
}

void EDM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EDM_update(dt_ms, &bridge->state, &EDM_g_int_state, out);
    /* TODO: map EDM outputs to global actuators (Entry Diff Map) */
}
