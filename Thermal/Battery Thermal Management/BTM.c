#include "BTM.h"
#include <string.h>

static BTM_State  BTM_g_state;
static BTM_Config BTM_g_config;

void BTM_init(const BTM_Config* cfg) {
    if (cfg) BTM_g_config = *cfg;
    else     memset(&BTM_g_config, 0, sizeof(BTM_g_config));
    memset(&BTM_g_state, 0, sizeof(BTM_g_state));
}

void BTM_update(float dt_ms, const VehicleState* vs, BTM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BTM_g_state = *state;
    /* TODO: implement BTM control logic for Battery Thermal Management */
}

void BTM_shutdown(void) {
    BTM_g_state.active = false;
}
