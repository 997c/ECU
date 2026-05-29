#include "MGH.h"
#include <string.h>

static MGH_State  MGH_g_state;
static MGH_Config MGH_g_config;

void MGH_init(const MGH_Config* cfg) {
    if (cfg) MGH_g_config = *cfg;
    else     memset(&MGH_g_config, 0, sizeof(MGH_g_config));
    memset(&MGH_g_state, 0, sizeof(MGH_g_state));
}

void MGH_update(float dt_ms, const VehicleState* vs, MGH_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) MGH_g_state = *state;
    /* TODO: implement MGH control logic for MGU-H Control */
}

void MGH_shutdown(void) {
    MGH_g_state.active = false;
}
