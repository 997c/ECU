#include "OTMintegration.h"
#include <string.h>

static OTM_State OTM_g_int_state;

void OTM_integration_init(void) {
    memset(&OTM_g_int_state, 0, sizeof(OTM_g_int_state));
}

void OTM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    OTM_update(dt_ms, &bridge->state, &OTM_g_int_state, out);
    /* TODO: map OTM outputs to global actuators (Oil Thermal Management) */
}
