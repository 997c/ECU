#include "MGK.h"
#include <string.h>

static MGK_State  MGK_g_state;
static MGK_Config MGK_g_config;

void MGK_init(const MGK_Config* cfg) {
    if (cfg) MGK_g_config = *cfg;
    else     memset(&MGK_g_config, 0, sizeof(MGK_g_config));
    memset(&MGK_g_state, 0, sizeof(MGK_g_state));
}

void MGK_update(float dt_ms, const VehicleState* vs, MGK_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) MGK_g_state = *state;
    /* TODO: implement MGK control logic for MGU-K Torque Blend Control */
}

void MGK_shutdown(void) {
    MGK_g_state.active = false;
}
