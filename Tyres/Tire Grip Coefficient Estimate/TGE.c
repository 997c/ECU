#include "TGE.h"
#include <string.h>

static TGE_State  TGE_g_state;
static TGE_Config TGE_g_config;

void TGE_init(const TGE_Config* cfg) {
    if (cfg) TGE_g_config = *cfg;
    else     memset(&TGE_g_config, 0, sizeof(TGE_g_config));
    memset(&TGE_g_state, 0, sizeof(TGE_g_state));
}

void TGE_update(float dt_ms, const VehicleState* vs, TGE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TGE_g_state = *state;
    /* TODO: implement TGE control logic for Tire Grip Coefficient Estimate */
}

void TGE_shutdown(void) {
    TGE_g_state.active = false;
}
