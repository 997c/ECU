#include "PTC.h"
#include <string.h>

static PTC_State  PTC_g_state;
static PTC_Config PTC_g_config;

void PTC_init(const PTC_Config* cfg) {
    if (cfg) PTC_g_config = *cfg;
    else     memset(&PTC_g_config, 0, sizeof(PTC_g_config));
    memset(&PTC_g_state, 0, sizeof(PTC_g_state));
}

void PTC_update(float dt_ms, const VehicleState* vs, PTC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) PTC_g_state = *state;
    /* TODO: implement PTC control logic for Pitch Control */
}

void PTC_shutdown(void) {
    PTC_g_state.active = false;
}
