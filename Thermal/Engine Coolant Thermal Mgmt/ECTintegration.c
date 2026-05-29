#include "ECTintegration.h"
#include <string.h>

static ECT_State ECT_g_int_state;

void ECT_integration_init(void) {
    memset(&ECT_g_int_state, 0, sizeof(ECT_g_int_state));
}

void ECT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ECT_update(dt_ms, &bridge->state, &ECT_g_int_state, out);
    /* TODO: map ECT outputs to global actuators (Engine Coolant Thermal Mgmt) */
}
