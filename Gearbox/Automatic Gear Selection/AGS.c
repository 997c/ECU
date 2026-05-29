#include "AGS.h"
#include <string.h>

static AGS_State  AGS_g_state;
static AGS_Config AGS_g_config;

void AGS_init(const AGS_Config* cfg) {
    if (cfg) AGS_g_config = *cfg;
    else     memset(&AGS_g_config, 0, sizeof(AGS_g_config));
    memset(&AGS_g_state, 0, sizeof(AGS_g_state));
}

void AGS_update(float dt_ms, const VehicleState* vs, AGS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AGS_g_state = *state;
    /* TODO: implement AGS control logic for Automatic Gear Selection */
}

void AGS_shutdown(void) {
    AGS_g_state.active = false;
}
