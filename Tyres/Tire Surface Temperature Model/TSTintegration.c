#include "TSTintegration.h"
#include <string.h>

static TST_State TST_g_int_state;

void TST_integration_init(void) {
    memset(&TST_g_int_state, 0, sizeof(TST_g_int_state));
}

void TST_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TST_update(dt_ms, &bridge->state, &TST_g_int_state, out);
    /* TODO: map TST outputs to global actuators (Tire Surface Temperature Model) */
}
