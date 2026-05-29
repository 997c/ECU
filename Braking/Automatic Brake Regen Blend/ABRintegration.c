#include "ABRintegration.h"
#include <string.h>

static ABR_State ABR_g_int_state;

void ABR_integration_init(void) {
    memset(&ABR_g_int_state, 0, sizeof(ABR_g_int_state));
}

void ABR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABR_update(dt_ms, &bridge->state, &ABR_g_int_state, out);
    /* TODO: map ABR outputs to global actuators (Automatic Brake Regen Blend) */
}
