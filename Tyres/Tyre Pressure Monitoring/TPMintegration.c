#include "TPMintegration.h"
#include <string.h>

static TPM_State TPM_g_int_state;

void TPM_integration_init(void) {
    memset(&TPM_g_int_state, 0, sizeof(TPM_g_int_state));
}

void TPM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TPM_update(dt_ms, &bridge->state, &TPM_g_int_state, out);
    /* TODO: map TPM outputs to global actuators (Tyre Pressure Monitoring) */
}
