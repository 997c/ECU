#include "DDSintegration.h"
#include <string.h>

static DDS_State DDS_g_int_state;

void DDS_integration_init(void) {
    memset(&DDS_g_int_state, 0, sizeof(DDS_g_int_state));
}

void DDS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DDS_update(dt_ms, &bridge->state, &DDS_g_int_state, out);
    /* TODO: map DDS outputs to global actuators (Double Diffuser System) */
}
