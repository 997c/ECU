#include "FIC.h"
#include <string.h>

static FIC_State  FIC_g_state;
static FIC_Config FIC_g_config;

void FIC_init(const FIC_Config* cfg) {
    if (cfg) FIC_g_config = *cfg;
    else     memset(&FIC_g_config, 0, sizeof(FIC_g_config));
    memset(&FIC_g_state, 0, sizeof(FIC_g_state));
}

void FIC_update(float dt_ms, const VehicleState* vs, FIC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FIC_g_state = *state;
    /* TODO: implement FIC control logic for Fuel Injection Control */
}

void FIC_shutdown(void) {
    FIC_g_state.active = false;
}
