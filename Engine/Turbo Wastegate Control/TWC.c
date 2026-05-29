#include "TWC.h"
#include <string.h>

static TWC_State  TWC_g_state;
static TWC_Config TWC_g_config;

void TWC_init(const TWC_Config* cfg) {
    if (cfg) TWC_g_config = *cfg;
    else     memset(&TWC_g_config, 0, sizeof(TWC_g_config));
    memset(&TWC_g_state, 0, sizeof(TWC_g_state));
}

void TWC_update(float dt_ms, const VehicleState* vs, TWC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TWC_g_state = *state;
    /* TODO: implement TWC control logic for Turbo Wastegate Control */
}

void TWC_shutdown(void) {
    TWC_g_state.active = false;
}
