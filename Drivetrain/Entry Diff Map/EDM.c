#include "EDM.h"
#include <string.h>

static EDM_State  EDM_g_state;
static EDM_Config EDM_g_config;

void EDM_init(const EDM_Config* cfg) {
    if (cfg) EDM_g_config = *cfg;
    else     memset(&EDM_g_config, 0, sizeof(EDM_g_config));
    memset(&EDM_g_state, 0, sizeof(EDM_g_state));
}

void EDM_update(float dt_ms, const VehicleState* vs, EDM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EDM_g_state = *state;
    /* TODO: implement EDM control logic for Entry Diff Map */
}

void EDM_shutdown(void) {
    EDM_g_state.active = false;
}
