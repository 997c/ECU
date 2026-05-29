#include "DTCintegration.h"
#include <string.h>

static DTC_State DTC_g_int_state;

void DTC_integration_init(void) {
    memset(&DTC_g_int_state, 0, sizeof(DTC_g_int_state));
}

void DTC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DTC_update(dt_ms, &bridge->state, &DTC_g_int_state, out);
    /* TODO: map DTC outputs to global actuators (Drivetrain Torque Control Auto) */
}
