#include "AGPintegration.h"
#include <string.h>

static AGP_State AGP_g_int_state;

void AGP_integration_init(void) {
    memset(&AGP_g_int_state, 0, sizeof(AGP_g_int_state));
}

void AGP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AGP_update(dt_ms, &bridge->state, &AGP_g_int_state, out);
    /* TODO: map AGP outputs to global actuators (Automatic Gear Protection) */
}
