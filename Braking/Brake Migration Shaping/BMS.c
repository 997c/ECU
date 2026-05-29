#include "BMS.h"
#include <string.h>

static BMS_State  BMS_g_state;
static BMS_Config BMS_g_config;

void BMS_init(const BMS_Config* cfg) {
    if (cfg) BMS_g_config = *cfg;
    else     memset(&BMS_g_config, 0, sizeof(BMS_g_config));
    memset(&BMS_g_state, 0, sizeof(BMS_g_state));
}

void BMS_update(float dt_ms, const VehicleState* vs, BMS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BMS_g_state = *state;
    /* TODO: implement BMS control logic for Brake Migration Shaping */
}

void BMS_shutdown(void) {
    BMS_g_state.active = false;
}
