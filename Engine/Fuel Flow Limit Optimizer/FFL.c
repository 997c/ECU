#include "FFL.h"
#include <string.h>

static FFL_State  FFL_g_state;
static FFL_Config FFL_g_config;

void FFL_init(const FFL_Config* cfg) {
    if (cfg) FFL_g_config = *cfg;
    else     memset(&FFL_g_config, 0, sizeof(FFL_g_config));
    memset(&FFL_g_state, 0, sizeof(FFL_g_state));
}

void FFL_update(float dt_ms, const VehicleState* vs, FFL_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FFL_g_state = *state;
    /* TODO: implement FFL control logic for Fuel Flow Limit Optimizer */
}

void FFL_shutdown(void) {
    FFL_g_state.active = false;
}
