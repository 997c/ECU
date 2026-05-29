#include "AFTintegration.h"
#include <string.h>

static AFT_State AFT_g_int_state;

void AFT_integration_init(void) {
    memset(&AFT_g_int_state, 0, sizeof(AFT_g_int_state));
}

void AFT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFT_update(dt_ms, &bridge->state, &AFT_g_int_state, out);
    /* TODO: map AFT outputs to global actuators (Active Floor Throat Control) */
}
