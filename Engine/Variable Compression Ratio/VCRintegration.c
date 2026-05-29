#include "VCRintegration.h"
#include <string.h>

static VCR_State VCR_g_int_state;

void VCR_integration_init(void) {
    memset(&VCR_g_int_state, 0, sizeof(VCR_g_int_state));
}

void VCR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    VCR_update(dt_ms, &bridge->state, &VCR_g_int_state, out);
    /* TODO: map VCR outputs to global actuators (Variable Compression Ratio) */
}
