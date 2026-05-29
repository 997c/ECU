#include "KNCintegration.h"
#include <string.h>

static KNC_State KNC_g_int_state;

void KNC_integration_init(void) {
    memset(&KNC_g_int_state, 0, sizeof(KNC_g_int_state));
}

void KNC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    KNC_update(dt_ms, &bridge->state, &KNC_g_int_state, out);
    /* TODO: map KNC outputs to global actuators (Knock Combustion Control) */
}
