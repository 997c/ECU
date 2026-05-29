#include "YMD.h"
#include <string.h>

static YMD_State  YMD_g_state;
static YMD_Config YMD_g_config;

void YMD_init(const YMD_Config* cfg) {
    if (cfg) YMD_g_config = *cfg;
    else     memset(&YMD_g_config, 0, sizeof(YMD_g_config));
    memset(&YMD_g_state, 0, sizeof(YMD_g_state));
}

void YMD_update(float dt_ms, const VehicleState* vs, YMD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) YMD_g_state = *state;
    /* TODO: implement YMD control logic for Yaw Moment Demand */
}

void YMD_shutdown(void) {
    YMD_g_state.active = false;
}
