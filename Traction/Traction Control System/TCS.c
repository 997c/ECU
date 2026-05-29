#include "TCS.h"
#include <string.h>

static TCS_State  TCS_g_state;
static TCS_Config TCS_g_config;

void TCS_init(const TCS_Config* cfg) {
    if (cfg) TCS_g_config = *cfg;
    else     memset(&TCS_g_config, 0, sizeof(TCS_g_config));
    memset(&TCS_g_state, 0, sizeof(TCS_g_state));
}

void TCS_update(float dt_ms, const VehicleState* vs, TCS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TCS_g_state = *state;
    /* TODO: implement TCS control logic for Traction Control System */
}

void TCS_shutdown(void) {
    TCS_g_state.active = false;
}
