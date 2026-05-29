#include "TQV.h"
#include <string.h>

static TQV_State  TQV_g_state;
static TQV_Config TQV_g_config;

void TQV_init(const TQV_Config* cfg) {
    if (cfg) TQV_g_config = *cfg;
    else     memset(&TQV_g_config, 0, sizeof(TQV_g_config));
    memset(&TQV_g_state, 0, sizeof(TQV_g_state));
}

void TQV_update(float dt_ms, const VehicleState* vs, TQV_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TQV_g_state = *state;
    /* TODO: implement TQV control logic for Torque Vectoring Full Auto */
}

void TQV_shutdown(void) {
    TQV_g_state.active = false;
}
