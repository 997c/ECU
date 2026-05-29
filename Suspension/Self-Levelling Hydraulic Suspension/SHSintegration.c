#include "SHSintegration.h"
#include <string.h>

static SHS_State SHS_g_int_state;

void SHS_integration_init(void) {
    memset(&SHS_g_int_state, 0, sizeof(SHS_g_int_state));
}

void SHS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    SHS_update(dt_ms, &bridge->state, &SHS_g_int_state, out);
    /* TODO: map SHS outputs to global actuators (Self-Levelling Hydraulic Suspension) */
}
