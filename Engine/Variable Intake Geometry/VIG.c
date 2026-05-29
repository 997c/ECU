#include "VIG.h"
#include <string.h>

static VIG_State  VIG_g_state;
static VIG_Config VIG_g_config;

void VIG_init(const VIG_Config* cfg) {
    if (cfg) VIG_g_config = *cfg;
    else     memset(&VIG_g_config, 0, sizeof(VIG_g_config));
    memset(&VIG_g_state, 0, sizeof(VIG_g_state));
}

void VIG_update(float dt_ms, const VehicleState* vs, VIG_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) VIG_g_state = *state;
    /* TODO: implement VIG control logic for Variable Intake Geometry */
}

void VIG_shutdown(void) {
    VIG_g_state.active = false;
}
