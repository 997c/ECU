#include "ETCintegration.h"
#include <string.h>

static ETC_State ETC_g_int_state;

void ETC_integration_init(void) {
    memset(&ETC_g_int_state, 0, sizeof(ETC_g_int_state));
}

void ETC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ETC_update(dt_ms, &bridge->state, &ETC_g_int_state, out);
    /* TODO: map ETC outputs to global actuators (Electronic Throttle Control) */
}
