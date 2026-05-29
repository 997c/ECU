#include "OVCintegration.h"
#include <string.h>

static OVC_State OVC_g_int_state;

void OVC_integration_init(void) {
    memset(&OVC_g_int_state, 0, sizeof(OVC_g_int_state));
}

void OVC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    OVC_update(dt_ms, &bridge->state, &OVC_g_int_state, out);
    /* TODO: map OVC outputs to global actuators (Oversteer Control Auto) */
}
