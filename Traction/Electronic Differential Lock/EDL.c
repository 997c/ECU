#include "EDL.h"
#include <string.h>

static EDL_State  EDL_g_state;
static EDL_Config EDL_g_config;

void EDL_init(const EDL_Config* cfg) {
    if (cfg) EDL_g_config = *cfg;
    else     memset(&EDL_g_config, 0, sizeof(EDL_g_config));
    memset(&EDL_g_state, 0, sizeof(EDL_g_state));
}

void EDL_update(float dt_ms, const VehicleState* vs, EDL_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EDL_g_state = *state;
    /* TODO: implement EDL control logic for Electronic Differential Lock */
}

void EDL_shutdown(void) {
    EDL_g_state.active = false;
}
