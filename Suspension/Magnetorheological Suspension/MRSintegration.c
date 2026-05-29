#include "MRSintegration.h"
#include <string.h>

static MRS_State MRS_g_int_state;

void MRS_integration_init(void) {
    memset(&MRS_g_int_state, 0, sizeof(MRS_g_int_state));
}

void MRS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    MRS_update(dt_ms, &bridge->state, &MRS_g_int_state, out);
    /* TODO: map MRS outputs to global actuators (Magnetorheological Suspension) */
}
