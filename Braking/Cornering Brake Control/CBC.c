#include "CBC.h"
#include <string.h>

static CBC_State  CBC_g_state;
static CBC_Config CBC_g_config;

void CBC_init(const CBC_Config* cfg) {
    if (cfg) CBC_g_config = *cfg;
    else     memset(&CBC_g_config, 0, sizeof(CBC_g_config));
    memset(&CBC_g_state, 0, sizeof(CBC_g_state));
}

void CBC_update(float dt_ms, const VehicleState* vs, CBC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) CBC_g_state = *state;
    /* TODO: implement CBC control logic for Cornering Brake Control */
}

void CBC_shutdown(void) {
    CBC_g_state.active = false;
}
