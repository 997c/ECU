#include "AGS2.h"
#include <string.h>

static AGS2_State  AGS2_g_state;
static AGS2_Config AGS2_g_config;

void AGS2_init(const AGS2_Config* cfg) {
    if (cfg) AGS2_g_config = *cfg;
    else     memset(&AGS2_g_config, 0, sizeof(AGS2_g_config));
    memset(&AGS2_g_state, 0, sizeof(AGS2_g_state));
}

void AGS2_update(float dt_ms, const VehicleState* vs, AGS2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AGS2_g_state = *state;
    /* TODO: implement AGS2 control logic for Automatic Gear Shift Strategy */
}

void AGS2_shutdown(void) {
    AGS2_g_state.active = false;
}
