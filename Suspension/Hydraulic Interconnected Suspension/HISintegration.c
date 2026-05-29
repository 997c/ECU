#include "HISintegration.h"
#include <string.h>

static HIS_State HIS_g_int_state;

void HIS_integration_init(void) {
    memset(&HIS_g_int_state, 0, sizeof(HIS_g_int_state));
}

void HIS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    HIS_update(dt_ms, &bridge->state, &HIS_g_int_state, out);
    /* TODO: map HIS outputs to global actuators (Hydraulic Interconnected Suspension) */
}
