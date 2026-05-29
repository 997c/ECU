#include "MGTintegration.h"
#include <string.h>

static MGT_State MGT_g_int_state;

void MGT_integration_init(void) {
    memset(&MGT_g_int_state, 0, sizeof(MGT_g_int_state));
}

void MGT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    MGT_update(dt_ms, &bridge->state, &MGT_g_int_state, out);
    /* TODO: map MGT outputs to global actuators (MGU Temperature Control) */
}
