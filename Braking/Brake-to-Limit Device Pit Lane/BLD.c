#include "BLD.h"
#include <string.h>

static BLD_State  BLD_g_state;
static BLD_Config BLD_g_config;

void BLD_init(const BLD_Config* cfg) {
    if (cfg) BLD_g_config = *cfg;
    else     memset(&BLD_g_config, 0, sizeof(BLD_g_config));
    memset(&BLD_g_state, 0, sizeof(BLD_g_state));
}

void BLD_update(float dt_ms, const VehicleState* vs, BLD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BLD_g_state = *state;
    /* TODO: implement BLD control logic for Brake-to-Limit Device Pit Lane */
}

void BLD_shutdown(void) {
    BLD_g_state.active = false;
}
