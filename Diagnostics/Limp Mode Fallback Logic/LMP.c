#include "LMP.h"
#include <string.h>

static LMP_State  LMP_g_state;
static LMP_Config LMP_g_config;

void LMP_init(const LMP_Config* cfg) {
    if (cfg) LMP_g_config = *cfg;
    else     memset(&LMP_g_config, 0, sizeof(LMP_g_config));
    memset(&LMP_g_state, 0, sizeof(LMP_g_state));
}

void LMP_update(float dt_ms, const VehicleState* vs, LMP_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) LMP_g_state = *state;
    /* TODO: implement LMP control logic for Limp Mode Fallback Logic */
}

void LMP_shutdown(void) {
    LMP_g_state.active = false;
}
