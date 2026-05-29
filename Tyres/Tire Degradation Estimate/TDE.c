#include "TDE.h"
#include <string.h>

static TDE_State  TDE_g_state;
static TDE_Config TDE_g_config;

void TDE_init(const TDE_Config* cfg) {
    if (cfg) TDE_g_config = *cfg;
    else     memset(&TDE_g_config, 0, sizeof(TDE_g_config));
    memset(&TDE_g_state, 0, sizeof(TDE_g_state));
}

void TDE_update(float dt_ms, const VehicleState* vs, TDE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TDE_g_state = *state;
    /* TODO: implement TDE control logic for Tire Degradation Estimate */
}

void TDE_shutdown(void) {
    TDE_g_state.active = false;
}
