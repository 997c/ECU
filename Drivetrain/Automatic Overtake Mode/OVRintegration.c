#include "OVRintegration.h"
#include <string.h>

static OVR_State OVR_g_int_state;

void OVR_integration_init(void) {
    memset(&OVR_g_int_state, 0, sizeof(OVR_g_int_state));
}

void OVR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    OVR_update(dt_ms, &bridge->state, &OVR_g_int_state, out);
    /* TODO: map OVR outputs to global actuators (Automatic Overtake Mode) */
}
