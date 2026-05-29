#include "MRS.h"
#include <string.h>

static MRS_State  MRS_g_state;
static MRS_Config MRS_g_config;

void MRS_init(const MRS_Config* cfg) {
    if (cfg) MRS_g_config = *cfg;
    else     memset(&MRS_g_config, 0, sizeof(MRS_g_config));
    memset(&MRS_g_state, 0, sizeof(MRS_g_state));
}

void MRS_update(float dt_ms, const VehicleState* vs, MRS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) MRS_g_state = *state;
    /* TODO: implement MRS control logic for Magnetorheological Suspension */
}

void MRS_shutdown(void) {
    MRS_g_state.active = false;
}
