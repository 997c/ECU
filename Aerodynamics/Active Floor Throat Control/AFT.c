#include "AFT.h"
#include <string.h>

static AFT_State  AFT_g_state;
static AFT_Config AFT_g_config;

void AFT_init(const AFT_Config* cfg) {
    if (cfg) AFT_g_config = *cfg;
    else     memset(&AFT_g_config, 0, sizeof(AFT_g_config));
    memset(&AFT_g_state, 0, sizeof(AFT_g_state));
}

void AFT_update(float dt_ms, const VehicleState* vs, AFT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFT_g_state = *state;
    /* TODO: implement AFT control logic for Active Floor Throat Control */
}

void AFT_shutdown(void) {
    AFT_g_state.active = false;
}
