#include "ARMintegration.h"
#include <string.h>

static ARM_State ARM_g_int_state;

void ARM_integration_init(void) {
    memset(&ARM_g_int_state, 0, sizeof(ARM_g_int_state));
}

void ARM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ARM_update(dt_ms, &bridge->state, &ARM_g_int_state, out);
    /* TODO: map ARM outputs to global actuators (Automatic Rev-Matching) */
}
