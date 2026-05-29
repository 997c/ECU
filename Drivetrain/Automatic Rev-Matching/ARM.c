#include "ARM.h"
#include <string.h>

static ARM_State  ARM_g_state;
static ARM_Config ARM_g_config;

void ARM_init(const ARM_Config* cfg) {
    if (cfg) ARM_g_config = *cfg;
    else     memset(&ARM_g_config, 0, sizeof(ARM_g_config));
    memset(&ARM_g_state, 0, sizeof(ARM_g_state));
}

void ARM_update(float dt_ms, const VehicleState* vs, ARM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARM_g_state = *state;
    /* TODO: implement ARM control logic for Automatic Rev-Matching */
}

void ARM_shutdown(void) {
    ARM_g_state.active = false;
}
