#include "ABP.h"
#include <string.h>

static ABP_State  ABP_g_state;
static ABP_Config ABP_g_config;

void ABP_init(const ABP_Config* cfg) {
    if (cfg) ABP_g_config = *cfg;
    else     memset(&ABP_g_config, 0, sizeof(ABP_g_config));
    memset(&ABP_g_state, 0, sizeof(ABP_g_state));
}

void ABP_update(float dt_ms, const VehicleState* vs, ABP_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABP_g_state = *state;
    /* TODO: implement ABP control logic for Automatic Brake Pressure Modulation */
}

void ABP_shutdown(void) {
    ABP_g_state.active = false;
}
