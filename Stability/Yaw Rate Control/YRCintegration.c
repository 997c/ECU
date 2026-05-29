#include "YRCintegration.h"
#include <string.h>

static YRC_State YRC_g_int_state;

void YRC_integration_init(void) {
    memset(&YRC_g_int_state, 0, sizeof(YRC_g_int_state));
}

void YRC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    YRC_update(dt_ms, &bridge->state, &YRC_g_int_state, out);
    /* TODO: map YRC outputs to global actuators (Yaw Rate Control) */
}
