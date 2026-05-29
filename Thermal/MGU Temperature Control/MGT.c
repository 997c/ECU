#include "MGT.h"
#include <string.h>

static MGT_State  MGT_g_state;
static MGT_Config MGT_g_config;

void MGT_init(const MGT_Config* cfg) {
    if (cfg) MGT_g_config = *cfg;
    else     memset(&MGT_g_config, 0, sizeof(MGT_g_config));
    memset(&MGT_g_state, 0, sizeof(MGT_g_state));
}

void MGT_update(float dt_ms, const VehicleState* vs, MGT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) MGT_g_state = *state;
    /* TODO: implement MGT control logic for MGU Temperature Control */
}

void MGT_shutdown(void) {
    MGT_g_state.active = false;
}
