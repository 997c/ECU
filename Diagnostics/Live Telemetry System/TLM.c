#include "TLM.h"
#include <string.h>

static TLM_State  TLM_g_state;
static TLM_Config TLM_g_config;

void TLM_init(const TLM_Config* cfg) {
    if (cfg) TLM_g_config = *cfg;
    else     memset(&TLM_g_config, 0, sizeof(TLM_g_config));
    memset(&TLM_g_state, 0, sizeof(TLM_g_state));
}

void TLM_update(float dt_ms, const VehicleState* vs, TLM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TLM_g_state = *state;
    /* TODO: implement TLM control logic for Live Telemetry System */
}

void TLM_shutdown(void) {
    TLM_g_state.active = false;
}
