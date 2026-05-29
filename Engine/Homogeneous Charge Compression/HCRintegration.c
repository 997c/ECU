#include "HCRintegration.h"
#include <string.h>

static HCR_State HCR_g_int_state;

void HCR_integration_init(void) {
    memset(&HCR_g_int_state, 0, sizeof(HCR_g_int_state));
}

void HCR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    HCR_update(dt_ms, &bridge->state, &HCR_g_int_state, out);
    /* TODO: map HCR outputs to global actuators (Homogeneous Charge Compression) */
}
