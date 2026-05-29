#include "YRC.h"
#include <string.h>

static YRC_State  YRC_g_state;
static YRC_Config YRC_g_config;

void YRC_init(const YRC_Config* cfg) {
    if (cfg) YRC_g_config = *cfg;
    else     memset(&YRC_g_config, 0, sizeof(YRC_g_config));
    memset(&YRC_g_state, 0, sizeof(YRC_g_state));
}

void YRC_update(float dt_ms, const VehicleState* vs, YRC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) YRC_g_state = *state;
    /* TODO: implement YRC control logic for Yaw Rate Control */
}

void YRC_shutdown(void) {
    YRC_g_state.active = false;
}
