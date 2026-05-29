#include "WSD.h"
#include <string.h>

static WSD_State  WSD_g_state;
static WSD_Config WSD_g_config;

void WSD_init(const WSD_Config* cfg) {
    if (cfg) WSD_g_config = *cfg;
    else     memset(&WSD_g_config, 0, sizeof(WSD_g_config));
    memset(&WSD_g_state, 0, sizeof(WSD_g_state));
}

void WSD_update(float dt_ms, const VehicleState* vs, WSD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) WSD_g_state = *state;
    /* TODO: implement WSD control logic for Wheel Spin Detection Auto Correction */
}

void WSD_shutdown(void) {
    WSD_g_state.active = false;
}
