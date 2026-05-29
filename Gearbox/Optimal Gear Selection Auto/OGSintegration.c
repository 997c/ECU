#include "OGSintegration.h"
#include <string.h>

static OGS_State OGS_g_int_state;

void OGS_integration_init(void) {
    memset(&OGS_g_int_state, 0, sizeof(OGS_g_int_state));
}

void OGS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    OGS_update(dt_ms, &bridge->state, &OGS_g_int_state, out);
    /* TODO: map OGS outputs to global actuators (Optimal Gear Selection Auto) */
}
