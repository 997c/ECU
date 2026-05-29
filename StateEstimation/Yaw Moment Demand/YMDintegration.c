#include "YMDintegration.h"
#include <string.h>

static YMD_State YMD_g_int_state;

void YMD_integration_init(void) {
    memset(&YMD_g_int_state, 0, sizeof(YMD_g_int_state));
}

void YMD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    YMD_update(dt_ms, &bridge->state, &YMD_g_int_state, out);
    /* TODO: map YMD outputs to global actuators (Yaw Moment Demand) */
}
