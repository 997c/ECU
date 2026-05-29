#include "SLA.h"
#include <string.h>

static SLA_State  SLA_g_state;
static SLA_Config SLA_g_config;

void SLA_init(const SLA_Config* cfg) {
    if (cfg) SLA_g_config = *cfg;
    else     memset(&SLA_g_config, 0, sizeof(SLA_g_config));
    memset(&SLA_g_state, 0, sizeof(SLA_g_state));
}

void SLA_update(float dt_ms, const VehicleState* vs, SLA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) SLA_g_state = *state;
    /* TODO: implement SLA control logic for Slip Angle Target Control */
}

void SLA_shutdown(void) {
    SLA_g_state.active = false;
}
