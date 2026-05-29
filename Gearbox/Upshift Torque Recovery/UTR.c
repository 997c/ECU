#include "UTR.h"
#include <string.h>

static UTR_State  UTR_g_state;
static UTR_Config UTR_g_config;

void UTR_init(const UTR_Config* cfg) {
    if (cfg) UTR_g_config = *cfg;
    else     memset(&UTR_g_config, 0, sizeof(UTR_g_config));
    memset(&UTR_g_state, 0, sizeof(UTR_g_state));
}

void UTR_update(float dt_ms, const VehicleState* vs, UTR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) UTR_g_state = *state;
    /* TODO: implement UTR control logic for Upshift Torque Recovery */
}

void UTR_shutdown(void) {
    UTR_g_state.active = false;
}
