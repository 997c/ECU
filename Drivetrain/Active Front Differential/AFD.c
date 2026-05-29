#include "AFD.h"
#include <string.h>

static AFD_State  AFD_g_state;
static AFD_Config AFD_g_config;

void AFD_init(const AFD_Config* cfg) {
    if (cfg) AFD_g_config = *cfg;
    else     memset(&AFD_g_config, 0, sizeof(AFD_g_config));
    memset(&AFD_g_state, 0, sizeof(AFD_g_state));
}

void AFD_update(float dt_ms, const VehicleState* vs, AFD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFD_g_state = *state;
    /* TODO: implement AFD control logic for Active Front Differential */
}

void AFD_shutdown(void) {
    AFD_g_state.active = false;
}
