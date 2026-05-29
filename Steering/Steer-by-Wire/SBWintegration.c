#include "SBWintegration.h"
#include <string.h>

static SBW_State SBW_g_int_state;

void SBW_integration_init(void) {
    memset(&SBW_g_int_state, 0, sizeof(SBW_g_int_state));
}

void SBW_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SBW_update(dt_ms, &bridge->state, &SBW_g_int_state, out);
    /* TODO: map SBW outputs to global actuators (Steer-by-Wire) */
}
