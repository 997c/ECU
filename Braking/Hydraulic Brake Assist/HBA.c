#include "HBA.h"
#include <string.h>

static HBA_State  HBA_g_state;
static HBA_Config HBA_g_config;

void HBA_init(const HBA_Config* cfg) {
    if (cfg) HBA_g_config = *cfg;
    else     memset(&HBA_g_config, 0, sizeof(HBA_g_config));
    memset(&HBA_g_state, 0, sizeof(HBA_g_state));
}

void HBA_update(float dt_ms, const VehicleState* vs, HBA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) HBA_g_state = *state;
    /* TODO: implement HBA control logic for Hydraulic Brake Assist */
}

void HBA_shutdown(void) {
    HBA_g_state.active = false;
}
