#include "GBTintegration.h"
#include <string.h>

static GBT_State GBT_g_int_state;

void GBT_integration_init(void) {
    memset(&GBT_g_int_state, 0, sizeof(GBT_g_int_state));
}

void GBT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    GBT_update(dt_ms, &bridge->state, &GBT_g_int_state, out);
    /* TODO: map GBT outputs to global actuators (Gearbox Hydraulic Thermal) */
}
