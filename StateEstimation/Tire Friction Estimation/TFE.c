#include "TFE.h"
#include <string.h>

static TFE_State  TFE_g_state;
static TFE_Config TFE_g_config;

void TFE_init(const TFE_Config* cfg) {
    if (cfg) TFE_g_config = *cfg;
    else     memset(&TFE_g_config, 0, sizeof(TFE_g_config));
    memset(&TFE_g_state, 0, sizeof(TFE_g_state));
}

void TFE_update(float dt_ms, const VehicleState* vs, TFE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TFE_g_state = *state;
    /* TODO: implement TFE control logic for Tire Friction Estimation */
}

void TFE_shutdown(void) {
    TFE_g_state.active = false;
}
