#include "EPS.h"
#include <string.h>

static EPS_State  EPS_g_state;
static EPS_Config EPS_g_config;

void EPS_init(const EPS_Config* cfg) {
    if (cfg) EPS_g_config = *cfg;
    else     memset(&EPS_g_config, 0, sizeof(EPS_g_config));
    memset(&EPS_g_state, 0, sizeof(EPS_g_state));
}

void EPS_update(float dt_ms, const VehicleState* vs, EPS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EPS_g_state = *state;
    /* TODO: implement EPS control logic for Electronic Power Steering Auto */
}

void EPS_shutdown(void) {
    EPS_g_state.active = false;
}
