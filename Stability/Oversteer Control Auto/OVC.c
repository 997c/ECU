#include "OVC.h"
#include <string.h>

static OVC_State  OVC_g_state;
static OVC_Config OVC_g_config;

void OVC_init(const OVC_Config* cfg) {
    if (cfg) OVC_g_config = *cfg;
    else     memset(&OVC_g_config, 0, sizeof(OVC_g_config));
    memset(&OVC_g_state, 0, sizeof(OVC_g_state));
}

void OVC_update(float dt_ms, const VehicleState* vs, OVC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) OVC_g_state = *state;
    /* TODO: implement OVC control logic for Oversteer Control Auto */
}

void OVC_shutdown(void) {
    OVC_g_state.active = false;
}
