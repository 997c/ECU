#include "DYC.h"
#include <string.h>

static DYC_State  DYC_g_state;
static DYC_Config DYC_g_config;

void DYC_init(const DYC_Config* cfg) {
    if (cfg) DYC_g_config = *cfg;
    else     memset(&DYC_g_config, 0, sizeof(DYC_g_config));
    memset(&DYC_g_state, 0, sizeof(DYC_g_state));
}

void DYC_update(float dt_ms, const VehicleState* vs, DYC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DYC_g_state = *state;
    /* TODO: implement DYC control logic for Dynamic Yaw Control */
}

void DYC_shutdown(void) {
    DYC_g_state.active = false;
}
