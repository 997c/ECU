#include "VCR.h"
#include <string.h>

static VCR_State  VCR_g_state;
static VCR_Config VCR_g_config;

void VCR_init(const VCR_Config* cfg) {
    if (cfg) VCR_g_config = *cfg;
    else     memset(&VCR_g_config, 0, sizeof(VCR_g_config));
    memset(&VCR_g_state, 0, sizeof(VCR_g_state));
}

void VCR_update(float dt_ms, const VehicleState* vs, VCR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) VCR_g_state = *state;
    /* TODO: implement VCR control logic for Variable Compression Ratio */
}

void VCR_shutdown(void) {
    VCR_g_state.active = false;
}
