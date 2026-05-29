#include "ASS.h"
#include <string.h>

static ASS_State  ASS_g_state;
static ASS_Config ASS_g_config;

void ASS_init(const ASS_Config* cfg) {
    if (cfg) ASS_g_config = *cfg;
    else     memset(&ASS_g_config, 0, sizeof(ASS_g_config));
    memset(&ASS_g_state, 0, sizeof(ASS_g_state));
}

void ASS_update(float dt_ms, const VehicleState* vs, ASS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ASS_g_state = *state;
    /* TODO: implement ASS control logic for Active Spring Stiffness Control */
}

void ASS_shutdown(void) {
    ASS_g_state.active = false;
}
