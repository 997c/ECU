#include "DVS.h"
#include <string.h>

static DVS_State  DVS_g_state;
static DVS_Config DVS_g_config;

void DVS_init(const DVS_Config* cfg) {
    if (cfg) DVS_g_config = *cfg;
    else     memset(&DVS_g_config, 0, sizeof(DVS_g_config));
    memset(&DVS_g_state, 0, sizeof(DVS_g_state));
}

void DVS_update(float dt_ms, const VehicleState* vs, DVS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DVS_g_state = *state;
    /* TODO: implement DVS control logic for Deployment Strategy Control */
}

void DVS_shutdown(void) {
    DVS_g_state.active = false;
}
