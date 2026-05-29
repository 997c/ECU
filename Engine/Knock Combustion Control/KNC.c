#include "KNC.h"
#include <string.h>

static KNC_State  KNC_g_state;
static KNC_Config KNC_g_config;

void KNC_init(const KNC_Config* cfg) {
    if (cfg) KNC_g_config = *cfg;
    else     memset(&KNC_g_config, 0, sizeof(KNC_g_config));
    memset(&KNC_g_state, 0, sizeof(KNC_g_state));
}

void KNC_update(float dt_ms, const VehicleState* vs, KNC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) KNC_g_state = *state;
    /* TODO: implement KNC control logic for Knock Combustion Control */
}

void KNC_shutdown(void) {
    KNC_g_state.active = false;
}
