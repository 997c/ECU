#include "DSPintegration.h"
#include <string.h>

static DSP_State DSP_g_int_state;

void DSP_integration_init(void) {
    memset(&DSP_g_int_state, 0, sizeof(DSP_g_int_state));
}

void DSP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DSP_update(dt_ms, &bridge->state, &DSP_g_int_state, out);
    /* TODO: map DSP outputs to global actuators (Downshift Protection) */
}
