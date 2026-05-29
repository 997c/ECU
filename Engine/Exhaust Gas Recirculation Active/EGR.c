#include "EGR.h"
#include <string.h>

static EGR_State  EGR_g_state;
static EGR_Config EGR_g_config;

void EGR_init(const EGR_Config* cfg) {
    if (cfg) EGR_g_config = *cfg;
    else     memset(&EGR_g_config, 0, sizeof(EGR_g_config));
    memset(&EGR_g_state, 0, sizeof(EGR_g_state));
}

void EGR_update(float dt_ms, const VehicleState* vs, EGR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EGR_g_state = *state;
    /* TODO: implement EGR control logic for Exhaust Gas Recirculation Active */
}

void EGR_shutdown(void) {
    EGR_g_state.active = false;
}
