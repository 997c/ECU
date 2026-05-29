#include "TVB.h"
#include <string.h>

static TVB_State  TVB_g_state;
static TVB_Config TVB_g_config;

void TVB_init(const TVB_Config* cfg) {
    if (cfg) TVB_g_config = *cfg;
    else     memset(&TVB_g_config, 0, sizeof(TVB_g_config));
    memset(&TVB_g_state, 0, sizeof(TVB_g_state));
}

void TVB_update(float dt_ms, const VehicleState* vs, TVB_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TVB_g_state = *state;
    /* TODO: implement TVB control logic for Torque Vectoring by Brakes */
}

void TVB_shutdown(void) {
    TVB_g_state.active = false;
}
