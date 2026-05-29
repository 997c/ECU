#include "DBCintegration.h"
#include <string.h>

static DBC_State DBC_g_int_state;

void DBC_integration_init(void) {
    memset(&DBC_g_int_state, 0, sizeof(DBC_g_int_state));
}

void DBC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DBC_update(dt_ms, &bridge->state, &DBC_g_int_state, out);
    /* TODO: map DBC outputs to global actuators (Dynamic Brake Control) */
}
