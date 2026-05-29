#include "ETC2integration.h"
#include <string.h>

static ETC2_State ETC2_g_int_state;

void ETC2_integration_init(void) {
    memset(&ETC2_g_int_state, 0, sizeof(ETC2_g_int_state));
}

void ETC2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ETC2_update(dt_ms, &bridge->state, &ETC2_g_int_state, out);
    /* TODO: map ETC2 outputs to global actuators (Electric Torque Fill Auto) */
}
