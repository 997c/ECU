#include "ICTintegration.h"
#include <string.h>

static ICT_State ICT_g_int_state;

void ICT_integration_init(void) {
    memset(&ICT_g_int_state, 0, sizeof(ICT_g_int_state));
}

void ICT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ICT_update(dt_ms, &bridge->state, &ICT_g_int_state, out);
    /* TODO: map ICT outputs to global actuators (Intercooler Charge Air Thermal) */
}
