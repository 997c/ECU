#include "AGP.h"
#include <string.h>

static AGP_State  AGP_g_state;
static AGP_Config AGP_g_config;

void AGP_init(const AGP_Config* cfg) {
    if (cfg) AGP_g_config = *cfg;
    else     memset(&AGP_g_config, 0, sizeof(AGP_g_config));
    memset(&AGP_g_state, 0, sizeof(AGP_g_state));
}

void AGP_update(float dt_ms, const VehicleState* vs, AGP_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AGP_g_state = *state;
    /* TODO: implement AGP control logic for Automatic Gear Protection */
}

void AGP_shutdown(void) {
    AGP_g_state.active = false;
}
