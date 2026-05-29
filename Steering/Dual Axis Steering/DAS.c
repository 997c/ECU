#include "DAS.h"
#include <string.h>

static DAS_State  DAS_g_state;
static DAS_Config DAS_g_config;

void DAS_init(const DAS_Config* cfg) {
    if (cfg) DAS_g_config = *cfg;
    else     memset(&DAS_g_config, 0, sizeof(DAS_g_config));
    memset(&DAS_g_state, 0, sizeof(DAS_g_state));
}

void DAS_update(float dt_ms, const VehicleState* vs, DAS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DAS_g_state = *state;
    /* TODO: implement DAS control logic for Dual Axis Steering */
}

void DAS_shutdown(void) {
    DAS_g_state.active = false;
}
