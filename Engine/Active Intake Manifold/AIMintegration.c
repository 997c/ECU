#include "AIMintegration.h"
#include <string.h>

static AIM_State AIM_g_int_state;

void AIM_integration_init(void) {
    memset(&AIM_g_int_state, 0, sizeof(AIM_g_int_state));
}

void AIM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AIM_update(dt_ms, &bridge->state, &AIM_g_int_state, out);
    /* TODO: map AIM outputs to global actuators (Active Intake Manifold) */
}
