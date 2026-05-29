#include "AGS2integration.h"
#include <string.h>

static AGS2_State AGS2_g_int_state;

void AGS2_integration_init(void) {
    memset(&AGS2_g_int_state, 0, sizeof(AGS2_g_int_state));
}

void AGS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AGS2_update(dt_ms, &bridge->state, &AGS2_g_int_state, out);
    /* TODO: map AGS2 outputs to global actuators (Automatic Gear Shift Strategy) */
}
