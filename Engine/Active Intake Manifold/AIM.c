#include "AIM.h"
#include <string.h>

static AIM_State  AIM_g_state;
static AIM_Config AIM_g_config;

void AIM_init(const AIM_Config* cfg) {
    if (cfg) AIM_g_config = *cfg;
    else     memset(&AIM_g_config, 0, sizeof(AIM_g_config));
    memset(&AIM_g_state, 0, sizeof(AIM_g_state));
}

void AIM_update(float dt_ms, const VehicleState* vs, AIM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AIM_g_state = *state;
    /* TODO: implement AIM control logic for Active Intake Manifold */
}

void AIM_shutdown(void) {
    AIM_g_state.active = false;
}
