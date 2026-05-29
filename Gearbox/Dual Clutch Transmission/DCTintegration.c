#include "DCTintegration.h"
#include <string.h>

static DCT_State DCT_g_int_state;

void DCT_integration_init(void) {
    memset(&DCT_g_int_state, 0, sizeof(DCT_g_int_state));
}

void DCT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DCT_update(dt_ms, &bridge->state, &DCT_g_int_state, out);
    /* TODO: map DCT outputs to global actuators (Dual Clutch Transmission) */
}
