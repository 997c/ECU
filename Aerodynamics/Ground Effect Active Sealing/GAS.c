#include "GAS.h"
#include <string.h>

static GAS_State  GAS_g_state;
static GAS_Config GAS_g_config;

void GAS_init(const GAS_Config* cfg) {
    if (cfg) GAS_g_config = *cfg;
    else     memset(&GAS_g_config, 0, sizeof(GAS_g_config));
    memset(&GAS_g_state, 0, sizeof(GAS_g_state));
}

void GAS_update(float dt_ms, const VehicleState* vs, GAS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) GAS_g_state = *state;
    /* TODO: implement GAS control logic for Ground Effect Active Sealing */
}

void GAS_shutdown(void) {
    GAS_g_state.active = false;
}
