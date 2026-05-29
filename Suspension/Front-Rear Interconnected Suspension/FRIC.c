#include "FRIC.h"
#include <string.h>

static FRIC_State  FRIC_g_state;
static FRIC_Config FRIC_g_config;

void FRIC_init(const FRIC_Config* cfg) {
    if (cfg) FRIC_g_config = *cfg;
    else     memset(&FRIC_g_config, 0, sizeof(FRIC_g_config));
    memset(&FRIC_g_state, 0, sizeof(FRIC_g_state));
}

void FRIC_update(float dt_ms, const VehicleState* vs, FRIC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FRIC_g_state = *state;
    /* TODO: implement FRIC control logic for Front-Rear Interconnected Suspension */
}

void FRIC_shutdown(void) {
    FRIC_g_state.active = false;
}
