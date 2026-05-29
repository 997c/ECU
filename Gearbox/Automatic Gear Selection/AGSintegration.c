#include "AGSintegration.h"
#include <string.h>

static AGS_State AGS_g_int_state;

void AGS_integration_init(void) {
    memset(&AGS_g_int_state, 0, sizeof(AGS_g_int_state));
}

void AGS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AGS_update(dt_ms, &bridge->state, &AGS_g_int_state, out);
    /* TODO: map AGS outputs to global actuators (Automatic Gear Selection) */
}
