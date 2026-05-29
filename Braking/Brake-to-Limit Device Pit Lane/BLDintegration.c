#include "BLDintegration.h"
#include <string.h>

static BLD_State BLD_g_int_state;

void BLD_integration_init(void) {
    memset(&BLD_g_int_state, 0, sizeof(BLD_g_int_state));
}

void BLD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BLD_update(dt_ms, &bridge->state, &BLD_g_int_state, out);
    /* TODO: map BLD outputs to global actuators (Brake-to-Limit Device Pit Lane) */
}
