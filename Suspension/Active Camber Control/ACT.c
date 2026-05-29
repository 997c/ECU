#include "ACT.h"
#include <string.h>

static ACT_State  ACT_g_state;
static ACT_Config ACT_g_config;

void ACT_init(const ACT_Config* cfg) {
    if (cfg) ACT_g_config = *cfg;
    else     memset(&ACT_g_config, 0, sizeof(ACT_g_config));
    memset(&ACT_g_state, 0, sizeof(ACT_g_state));
}

void ACT_update(float dt_ms, const VehicleState* vs, ACT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ACT_g_state = *state;
    /* TODO: implement ACT control logic for Active Camber Control */
}

void ACT_shutdown(void) {
    ACT_g_state.active = false;
}
