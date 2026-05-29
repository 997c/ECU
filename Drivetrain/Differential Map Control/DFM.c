#include "DFM.h"
#include <string.h>

static DFM_State  DFM_g_state;
static DFM_Config DFM_g_config;

void DFM_init(const DFM_Config* cfg) {
    if (cfg) DFM_g_config = *cfg;
    else     memset(&DFM_g_config, 0, sizeof(DFM_g_config));
    memset(&DFM_g_state, 0, sizeof(DFM_g_state));
}

void DFM_update(float dt_ms, const VehicleState* vs, DFM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DFM_g_state = *state;
    /* TODO: implement DFM control logic for Differential Map Control */
}

void DFM_shutdown(void) {
    DFM_g_state.active = false;
}
