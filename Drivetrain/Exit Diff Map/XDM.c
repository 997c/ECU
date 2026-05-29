#include "XDM.h"
#include <string.h>

static XDM_State  XDM_g_state;
static XDM_Config XDM_g_config;

void XDM_init(const XDM_Config* cfg) {
    if (cfg) XDM_g_config = *cfg;
    else     memset(&XDM_g_config, 0, sizeof(XDM_g_config));
    memset(&XDM_g_state, 0, sizeof(XDM_g_state));
}

void XDM_update(float dt_ms, const VehicleState* vs, XDM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) XDM_g_state = *state;
    /* TODO: implement XDM control logic for Exit Diff Map */
}

void XDM_shutdown(void) {
    XDM_g_state.active = false;
}
