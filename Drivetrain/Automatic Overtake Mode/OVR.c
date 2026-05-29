#include "OVR.h"
#include <string.h>

static OVR_State  OVR_g_state;
static OVR_Config OVR_g_config;

void OVR_init(const OVR_Config* cfg) {
    if (cfg) OVR_g_config = *cfg;
    else     memset(&OVR_g_config, 0, sizeof(OVR_g_config));
    memset(&OVR_g_state, 0, sizeof(OVR_g_state));
}

void OVR_update(float dt_ms, const VehicleState* vs, OVR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) OVR_g_state = *state;
    /* TODO: implement OVR control logic for Automatic Overtake Mode */
}

void OVR_shutdown(void) {
    OVR_g_state.active = false;
}
