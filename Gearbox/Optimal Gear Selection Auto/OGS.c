#include "OGS.h"
#include <string.h>

static OGS_State  OGS_g_state;
static OGS_Config OGS_g_config;

void OGS_init(const OGS_Config* cfg) {
    if (cfg) OGS_g_config = *cfg;
    else     memset(&OGS_g_config, 0, sizeof(OGS_g_config));
    memset(&OGS_g_state, 0, sizeof(OGS_g_state));
}

void OGS_update(float dt_ms, const VehicleState* vs, OGS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) OGS_g_state = *state;
    /* TODO: implement OGS control logic for Optimal Gear Selection Auto */
}

void OGS_shutdown(void) {
    OGS_g_state.active = false;
}
