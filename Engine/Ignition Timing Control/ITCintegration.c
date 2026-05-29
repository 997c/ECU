#include "ITCintegration.h"
#include <string.h>

static ITC_State ITC_g_int_state;

void ITC_integration_init(void) {
    memset(&ITC_g_int_state, 0, sizeof(ITC_g_int_state));
}

void ITC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ITC_update(dt_ms, &bridge->state, &ITC_g_int_state, out);
    /* TODO: map ITC outputs to global actuators (Ignition Timing Control) */
}
