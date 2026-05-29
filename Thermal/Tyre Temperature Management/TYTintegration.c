#include "TYTintegration.h"
#include <string.h>

static TYT_State TYT_g_int_state;

void TYT_integration_init(void) {
    memset(&TYT_g_int_state, 0, sizeof(TYT_g_int_state));
}

void TYT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TYT_update(dt_ms, &bridge->state, &TYT_g_int_state, out);
    /* TODO: map TYT outputs to global actuators (Tyre Temperature Management) */
}
