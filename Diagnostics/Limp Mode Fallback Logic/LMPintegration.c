#include "LMPintegration.h"
#include <string.h>

static LMP_State LMP_g_int_state;

void LMP_integration_init(void) {
    memset(&LMP_g_int_state, 0, sizeof(LMP_g_int_state));
}

void LMP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    LMP_update(dt_ms, &bridge->state, &LMP_g_int_state, out);
    /* TODO: map LMP outputs to global actuators (Limp Mode Fallback Logic) */
}
