#include "FCS.h"
#include <string.h>

static FCS_State  FCS_g_state;
static FCS_Config FCS_g_config;

void FCS_init(const FCS_Config* cfg) {
    if (cfg) FCS_g_config = *cfg;
    else     memset(&FCS_g_config, 0, sizeof(FCS_g_config));
    memset(&FCS_g_state, 0, sizeof(FCS_g_state));
}

void FCS_update(float dt_ms, const VehicleState* vs, FCS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FCS_g_state = *state;
    /* TODO: implement FCS control logic for Fan Car Suction System */
}

void FCS_shutdown(void) {
    FCS_g_state.active = false;
}
