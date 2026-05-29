#include "DBC.h"
#include <string.h>

static DBC_State  DBC_g_state;
static DBC_Config DBC_g_config;

void DBC_init(const DBC_Config* cfg) {
    if (cfg) DBC_g_config = *cfg;
    else     memset(&DBC_g_config, 0, sizeof(DBC_g_config));
    memset(&DBC_g_state, 0, sizeof(DBC_g_state));
}

void DBC_update(float dt_ms, const VehicleState* vs, DBC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DBC_g_state = *state;
    /* TODO: implement DBC control logic for Dynamic Brake Control */
}

void DBC_shutdown(void) {
    DBC_g_state.active = false;
}
