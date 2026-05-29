#include "MDRintegration.h"
#include <string.h>

static MDR_State MDR_g_int_state;

void MDR_integration_init(void) {
    memset(&MDR_g_int_state, 0, sizeof(MDR_g_int_state));
}

void MDR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    MDR_update(dt_ms, &bridge->state, &MDR_g_int_state, out);
    /* TODO: map MDR outputs to global actuators (Mass Damper Tuned Mass) */
}
