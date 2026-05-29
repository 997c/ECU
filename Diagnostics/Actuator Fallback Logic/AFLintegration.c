#include "AFLintegration.h"
#include <string.h>

static AFL_State AFL_g_int_state;

void AFL_integration_init(void) {
    memset(&AFL_g_int_state, 0, sizeof(AFL_g_int_state));
}

void AFL_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFL_update(dt_ms, &bridge->state, &AFL_g_int_state, out);
    /* TODO: map AFL outputs to global actuators (Actuator Fallback Logic) */
}
