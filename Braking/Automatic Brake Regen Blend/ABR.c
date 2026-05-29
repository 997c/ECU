#include "ABR.h"
#include <string.h>

static ABR_State  ABR_g_state;
static ABR_Config ABR_g_config;

void ABR_init(const ABR_Config* cfg) {
    if (cfg) ABR_g_config = *cfg;
    else     memset(&ABR_g_config, 0, sizeof(ABR_g_config));
    memset(&ABR_g_state, 0, sizeof(ABR_g_state));
}

void ABR_update(float dt_ms, const VehicleState* vs, ABR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABR_g_state = *state;
    /* TODO: implement ABR control logic for Automatic Brake Regen Blend */
}

void ABR_shutdown(void) {
    ABR_g_state.active = false;
}
