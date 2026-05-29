#include "SOC.h"
#include <string.h>

static SOC_State  SOC_g_state;
static SOC_Config SOC_g_config;

void SOC_init(const SOC_Config* cfg) {
    if (cfg) SOC_g_config = *cfg;
    else     memset(&SOC_g_config, 0, sizeof(SOC_g_config));
    memset(&SOC_g_state, 0, sizeof(SOC_g_state));
}

void SOC_update(float dt_ms, const VehicleState* vs, SOC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SOC_g_state = *state;
    /* TODO: implement SOC control logic for State of Charge Management */
}

void SOC_shutdown(void) {
    SOC_g_state.active = false;
}
