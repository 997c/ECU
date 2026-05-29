#include "VTG.h"
#include <string.h>

static VTG_State  VTG_g_state;
static VTG_Config VTG_g_config;

void VTG_init(const VTG_Config* cfg) {
    if (cfg) VTG_g_config = *cfg;
    else     memset(&VTG_g_config, 0, sizeof(VTG_g_config));
    memset(&VTG_g_state, 0, sizeof(VTG_g_state));
}

void VTG_update(float dt_ms, const VehicleState* vs, VTG_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) VTG_g_state = *state;
    /* TODO: implement VTG control logic for Variable Turbine Geometry */
}

void VTG_shutdown(void) {
    VTG_g_state.active = false;
}
