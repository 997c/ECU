#include "MGHintegration.h"
#include <string.h>

static MGH_State MGH_g_int_state;

void MGH_integration_init(void) {
    memset(&MGH_g_int_state, 0, sizeof(MGH_g_int_state));
}

void MGH_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    MGH_update(dt_ms, &bridge->state, &MGH_g_int_state, out);
    /* TODO: map MGH outputs to global actuators (MGU-H Control) */
}
