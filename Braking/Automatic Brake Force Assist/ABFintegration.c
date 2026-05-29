#include "ABFintegration.h"
#include <string.h>

static ABF_State ABF_g_int_state;

void ABF_integration_init(void) {
    memset(&ABF_g_int_state, 0, sizeof(ABF_g_int_state));
}

void ABF_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABF_update(dt_ms, &bridge->state, &ABF_g_int_state, out);
    /* TODO: map ABF outputs to global actuators (Automatic Brake Force Assist) */
}
