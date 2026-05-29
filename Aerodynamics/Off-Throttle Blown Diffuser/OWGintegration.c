#include "OWGintegration.h"
#include <string.h>

static OWG_State OWG_g_int_state;

void OWG_integration_init(void) {
    memset(&OWG_g_int_state, 0, sizeof(OWG_g_int_state));
}

void OWG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    OWG_update(dt_ms, &bridge->state, &OWG_g_int_state, out);
    /* TODO: map OWG outputs to global actuators (Off-Throttle Blown Diffuser) */
}
