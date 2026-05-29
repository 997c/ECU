#include "SCCintegration.h"
#include <string.h>

static SCC_State SCC_g_int_state;

void SCC_integration_init(void) {
    memset(&SCC_g_int_state, 0, sizeof(SCC_g_int_state));
}

void SCC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SCC_update(dt_ms, &bridge->state, &SCC_g_int_state, out);
    /* TODO: map SCC outputs to global actuators (Shift Cut Control) */
}
