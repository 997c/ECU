#include "TVE.h"
#include <string.h>

static TVE_State  TVE_g_state;
static TVE_Config TVE_g_config;

void TVE_init(const TVE_Config* cfg) {
    if (cfg) TVE_g_config = *cfg;
    else     memset(&TVE_g_config, 0, sizeof(TVE_g_config));
    memset(&TVE_g_state, 0, sizeof(TVE_g_state));
}

void TVE_update(float dt_ms, const VehicleState* vs, TVE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TVE_g_state = *state;
    /* TODO: implement TVE control logic for Torque Vectoring by Electric Motor */
}

void TVE_shutdown(void) {
    TVE_g_state.active = false;
}
