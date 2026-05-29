#include "BSDintegration.h"
#include <string.h>

static BSD_State BSD_g_int_state;

void BSD_integration_init(void) {
    memset(&BSD_g_int_state, 0, sizeof(BSD_g_int_state));
}

void BSD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BSD_update(dt_ms, &bridge->state, &BSD_g_int_state, out);
    /* TODO: map BSD outputs to global actuators (Brake Steer Differential Braking) */
}
