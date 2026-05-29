#include "SCC.h"
#include <string.h>

static SCC_State  SCC_g_state;
static SCC_Config SCC_g_config;

void SCC_init(const SCC_Config* cfg) {
    if (cfg) SCC_g_config = *cfg;
    else     memset(&SCC_g_config, 0, sizeof(SCC_g_config));
    memset(&SCC_g_state, 0, sizeof(SCC_g_state));
}

void SCC_update(float dt_ms, const VehicleState* vs, SCC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SCC_g_state = *state;
    /* TODO: implement SCC control logic for Shift Cut Control */
}

void SCC_shutdown(void) {
    SCC_g_state.active = false;
}
