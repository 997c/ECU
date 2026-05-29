#include "AWF.h"
#include <string.h>

static AWF_State  AWF_g_state;
static AWF_Config AWF_g_config;

void AWF_init(const AWF_Config* cfg) {
    if (cfg) AWF_g_config = *cfg;
    else     memset(&AWF_g_config, 0, sizeof(AWF_g_config));
    memset(&AWF_g_state, 0, sizeof(AWF_g_state));
}

void AWF_update(float dt_ms, const VehicleState* vs, AWF_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AWF_g_state = *state;
    /* TODO: implement AWF control logic for Active Wing Flap non-DRS */
}

void AWF_shutdown(void) {
    AWF_g_state.active = false;
}
