#include "OTM.h"
#include <string.h>

static OTM_State  OTM_g_state;
static OTM_Config OTM_g_config;

void OTM_init(const OTM_Config* cfg) {
    if (cfg) OTM_g_config = *cfg;
    else     memset(&OTM_g_config, 0, sizeof(OTM_g_config));
    memset(&OTM_g_state, 0, sizeof(OTM_g_state));
}

void OTM_update(float dt_ms, const VehicleState* vs, OTM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) OTM_g_state = *state;
    /* TODO: implement OTM control logic for Oil Thermal Management */
}

void OTM_shutdown(void) {
    OTM_g_state.active = false;
}
