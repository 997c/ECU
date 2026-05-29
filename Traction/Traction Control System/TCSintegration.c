#include "TCSintegration.h"
#include <string.h>

static TCS_State TCS_g_int_state;

void TCS_integration_init(void) {
    memset(&TCS_g_int_state, 0, sizeof(TCS_g_int_state));
}

void TCS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TCS_update(dt_ms, &bridge->state, &TCS_g_int_state, out);
    /* TODO: map TCS outputs to global actuators (Traction Control System) */
}
