#include "TPM.h"
#include <string.h>

static TPM_State  TPM_g_state;
static TPM_Config TPM_g_config;

void TPM_init(const TPM_Config* cfg) {
    if (cfg) TPM_g_config = *cfg;
    else     memset(&TPM_g_config, 0, sizeof(TPM_g_config));
    memset(&TPM_g_state, 0, sizeof(TPM_g_state));
}

void TPM_update(float dt_ms, const VehicleState* vs, TPM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TPM_g_state = *state;
    /* TODO: implement TPM control logic for Tyre Pressure Monitoring */
}

void TPM_shutdown(void) {
    TPM_g_state.active = false;
}
