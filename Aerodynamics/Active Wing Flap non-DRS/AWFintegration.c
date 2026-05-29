#include "AWFintegration.h"
#include <string.h>

static AWF_State AWF_g_int_state;

void AWF_integration_init(void) {
    memset(&AWF_g_int_state, 0, sizeof(AWF_g_int_state));
}

void AWF_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AWF_update(dt_ms, &bridge->state, &AWF_g_int_state, out);
    /* TODO: map AWF outputs to global actuators (Active Wing Flap non-DRS) */
}
