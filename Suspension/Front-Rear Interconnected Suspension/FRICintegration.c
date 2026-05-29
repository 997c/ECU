#include "FRICintegration.h"
#include <string.h>

static FRIC_State FRIC_g_int_state;

void FRIC_integration_init(void) {
    memset(&FRIC_g_int_state, 0, sizeof(FRIC_g_int_state));
}

void FRIC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FRIC_update(dt_ms, &bridge->state, &FRIC_g_int_state, out);
    /* TODO: map FRIC outputs to global actuators (Front-Rear Interconnected Suspension) */
}
