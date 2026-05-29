#include "ETSintegration.h"
#include <string.h>

static ETS_State ETS_g_int_state;

void ETS_integration_init(void) {
    memset(&ETS_g_int_state, 0, sizeof(ETS_g_int_state));
}

void ETS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ETS_update(dt_ms, &bridge->state, &ETS_g_int_state, out);
    /* TODO: map ETS outputs to global actuators (Electronic Torque Split) */
}
