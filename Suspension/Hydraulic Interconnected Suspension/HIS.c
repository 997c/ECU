#include "HIS.h"
#include <string.h>

static HIS_State  HIS_g_state;
static HIS_Config HIS_g_config;

void HIS_init(const HIS_Config* cfg) {
    if (cfg) HIS_g_config = *cfg;
    else     memset(&HIS_g_config, 0, sizeof(HIS_g_config));
    memset(&HIS_g_state, 0, sizeof(HIS_g_state));
}

void HIS_update(float dt_ms, const VehicleState* vs, HIS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) HIS_g_state = *state;
    /* TODO: implement HIS control logic for Hydraulic Interconnected Suspension */
}

void HIS_shutdown(void) {
    HIS_g_state.active = false;
}
