#include "DLGintegration.h"
#include <string.h>

static DLG_State DLG_g_int_state;

void DLG_integration_init(void) {
    memset(&DLG_g_int_state, 0, sizeof(DLG_g_int_state));
}

void DLG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    DLG_update(dt_ms, &bridge->state, &DLG_g_int_state, out);
    /* TODO: map DLG outputs to global actuators (Onboard Data Logging) */
}
