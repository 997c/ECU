#include "AFL.h"
#include <string.h>

static AFL_State  AFL_g_state;
static AFL_Config AFL_g_config;

void AFL_init(const AFL_Config* cfg) {
    if (cfg) AFL_g_config = *cfg;
    else     memset(&AFL_g_config, 0, sizeof(AFL_g_config));
    memset(&AFL_g_state, 0, sizeof(AFL_g_state));
}

void AFL_update(float dt_ms, const VehicleState* vs, AFL_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFL_g_state = *state;
    /* TODO: implement AFL control logic for Actuator Fallback Logic */
}

void AFL_shutdown(void) {
    AFL_g_state.active = false;
}
