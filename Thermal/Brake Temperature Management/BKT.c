#include "BKT.h"
#include <string.h>

static BKT_State  BKT_g_state;
static BKT_Config BKT_g_config;

void BKT_init(const BKT_Config* cfg) {
    if (cfg) BKT_g_config = *cfg;
    else     memset(&BKT_g_config, 0, sizeof(BKT_g_config));
    memset(&BKT_g_state, 0, sizeof(BKT_g_state));
}

void BKT_update(float dt_ms, const VehicleState* vs, BKT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BKT_g_state = *state;
    /* TODO: implement BKT control logic for Brake Temperature Management */
}

void BKT_shutdown(void) {
    BKT_g_state.active = false;
}
