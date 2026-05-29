#include "XDMintegration.h"
#include <string.h>

static XDM_State XDM_g_int_state;

void XDM_integration_init(void) {
    memset(&XDM_g_int_state, 0, sizeof(XDM_g_int_state));
}

void XDM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    XDM_update(dt_ms, &bridge->state, &XDM_g_int_state, out);
    /* TODO: map XDM outputs to global actuators (Exit Diff Map) */
}
