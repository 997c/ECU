#include "TQS.h"
#include <string.h>

static TQS_State  TQS_g_state;
static TQS_Config TQS_g_config;

void TQS_init(const TQS_Config* cfg) {
    if (cfg) TQS_g_config = *cfg;
    else     memset(&TQS_g_config, 0, sizeof(TQS_g_config));
    memset(&TQS_g_state, 0, sizeof(TQS_g_state));
}

void TQS_update(float dt_ms, const VehicleState* vs, TQS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TQS_g_state = *state;
    /* TODO: implement TQS control logic for Torque Shaping */
}

void TQS_shutdown(void) {
    TQS_g_state.active = false;
}
