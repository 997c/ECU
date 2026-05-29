#include "LEOintegration.h"
#include <string.h>

static LEO_State LEO_g_int_state;

void LEO_integration_init(void) {
    memset(&LEO_g_int_state, 0, sizeof(LEO_g_int_state));
}

void LEO_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    LEO_update(dt_ms, &bridge->state, &LEO_g_int_state, out);
    /* TODO: map LEO outputs to global actuators (Lap Energy Optimization) */
}
