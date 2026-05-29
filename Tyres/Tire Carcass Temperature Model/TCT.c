#include "TCT.h"
#include <string.h>

static TCT_State  TCT_g_state;
static TCT_Config TCT_g_config;

void TCT_init(const TCT_Config* cfg) {
    if (cfg) TCT_g_config = *cfg;
    else     memset(&TCT_g_config, 0, sizeof(TCT_g_config));
    memset(&TCT_g_state, 0, sizeof(TCT_g_state));
}

void TCT_update(float dt_ms, const VehicleState* vs, TCT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TCT_g_state = *state;
    /* TODO: implement TCT control logic for Tire Carcass Temperature Model */
}

void TCT_shutdown(void) {
    TCT_g_state.active = false;
}
