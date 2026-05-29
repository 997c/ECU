#include "APR.h"
#include <string.h>

static APR_State  APR_g_state;
static APR_Config APR_g_config;

void APR_init(const APR_Config* cfg) {
    if (cfg) APR_g_config = *cfg;
    else     memset(&APR_g_config, 0, sizeof(APR_g_config));
    memset(&APR_g_state, 0, sizeof(APR_g_state));
}

void APR_update(float dt_ms, const VehicleState* vs, APR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) APR_g_state = *state;
    /* TODO: implement APR control logic for Automatic Power Recovery */
}

void APR_shutdown(void) {
    APR_g_state.active = false;
}
