#include "OWG.h"
#include <string.h>

static OWG_State  OWG_g_state;
static OWG_Config OWG_g_config;

void OWG_init(const OWG_Config* cfg) {
    if (cfg) OWG_g_config = *cfg;
    else     memset(&OWG_g_config, 0, sizeof(OWG_g_config));
    memset(&OWG_g_state, 0, sizeof(OWG_g_state));
}

void OWG_update(float dt_ms, const VehicleState* vs, OWG_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) OWG_g_state = *state;
    /* TODO: implement OWG control logic for Off-Throttle Blown Diffuser */
}

void OWG_shutdown(void) {
    OWG_g_state.active = false;
}
