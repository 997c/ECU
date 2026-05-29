#include "ASSintegration.h"
#include <string.h>

static ASS_State ASS_g_int_state;

void ASS_integration_init(void) {
    memset(&ASS_g_int_state, 0, sizeof(ASS_g_int_state));
}

void ASS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ASS_update(dt_ms, &bridge->state, &ASS_g_int_state, out);
    /* TODO: map ASS outputs to global actuators (Active Spring Stiffness Control) */
}
