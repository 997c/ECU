#include "SHS.h"
#include <string.h>

static SHS_State  SHS_g_state;
static SHS_Config SHS_g_config;

void SHS_init(const SHS_Config* cfg) {
    if (cfg) SHS_g_config = *cfg;
    else     memset(&SHS_g_config, 0, sizeof(SHS_g_config));
    memset(&SHS_g_state, 0, sizeof(SHS_g_state));
}

void SHS_update(float dt_ms, const VehicleState* vs, SHS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SHS_g_state = *state;
    /* TODO: implement SHS control logic for Self-Levelling Hydraulic Suspension */
}

void SHS_shutdown(void) {
    SHS_g_state.active = false;
}
