#include "CSAintegration.h"
#include <string.h>

static CSA_State CSA_g_int_state;

void CSA_integration_init(void) {
    memset(&CSA_g_int_state, 0, sizeof(CSA_g_int_state));
}

void CSA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    CSA_update(dt_ms, &bridge->state, &CSA_g_int_state, out);
    /* TODO: map CSA outputs to global actuators (Compressor Surge Avoidance) */
}
