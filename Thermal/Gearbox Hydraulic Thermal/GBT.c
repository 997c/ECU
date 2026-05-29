#include "GBT.h"
#include <string.h>

static GBT_State  GBT_g_state;
static GBT_Config GBT_g_config;

void GBT_init(const GBT_Config* cfg) {
    if (cfg) GBT_g_config = *cfg;
    else     memset(&GBT_g_config, 0, sizeof(GBT_g_config));
    memset(&GBT_g_state, 0, sizeof(GBT_g_state));
}

void GBT_update(float dt_ms, const VehicleState* vs, GBT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) GBT_g_state = *state;
    /* TODO: implement GBT control logic for Gearbox Hydraulic Thermal */
}

void GBT_shutdown(void) {
    GBT_g_state.active = false;
}
