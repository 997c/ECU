#include "VDS.h"
#include <string.h>

static VDS_State  VDS_g_state;
static VDS_Config VDS_g_config;

void VDS_init(const VDS_Config* cfg) {
    if (cfg) VDS_g_config = *cfg;
    else     memset(&VDS_g_config, 0, sizeof(VDS_g_config));
    memset(&VDS_g_state, 0, sizeof(VDS_g_state));
}

void VDS_update(float dt_ms, const VehicleState* vs, VDS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) VDS_g_state = *state;
    /* TODO: implement VDS control logic for Variable Downforce System */
}

void VDS_shutdown(void) {
    VDS_g_state.active = false;
}
