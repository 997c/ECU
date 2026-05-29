#include "BKTintegration.h"
#include <string.h>

static BKT_State BKT_g_int_state;

void BKT_integration_init(void) {
    memset(&BKT_g_int_state, 0, sizeof(BKT_g_int_state));
}

void BKT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BKT_update(dt_ms, &bridge->state, &BKT_g_int_state, out);
    /* TODO: map BKT outputs to global actuators (Brake Temperature Management) */
}
