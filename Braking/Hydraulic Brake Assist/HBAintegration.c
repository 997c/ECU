#include "HBAintegration.h"
#include <string.h>

static HBA_State HBA_g_int_state;

void HBA_integration_init(void) {
    memset(&HBA_g_int_state, 0, sizeof(HBA_g_int_state));
}

void HBA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    HBA_update(dt_ms, &bridge->state, &HBA_g_int_state, out);
    /* TODO: map HBA outputs to global actuators (Hydraulic Brake Assist) */
}
