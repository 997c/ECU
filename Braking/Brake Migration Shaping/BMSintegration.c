#include "BMSintegration.h"
#include <string.h>

static BMS_State BMS_g_int_state;

void BMS_integration_init(void) {
    memset(&BMS_g_int_state, 0, sizeof(BMS_g_int_state));
}

void BMS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BMS_update(dt_ms, &bridge->state, &BMS_g_int_state, out);
    /* TODO: map BMS outputs to global actuators (Brake Migration Shaping) */
}
