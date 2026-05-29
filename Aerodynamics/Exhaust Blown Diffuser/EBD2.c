#include "EBD2.h"
#include <string.h>

static EBD2_State  EBD2_g_state;
static EBD2_Config EBD2_g_config;

void EBD2_init(const EBD2_Config* cfg) {
    if (cfg) EBD2_g_config = *cfg;
    else     memset(&EBD2_g_config, 0, sizeof(EBD2_g_config));
    memset(&EBD2_g_state, 0, sizeof(EBD2_g_state));
}

void EBD2_update(float dt_ms, const VehicleState* vs, EBD2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EBD2_g_state = *state;
    /* TODO: implement EBD2 control logic for Exhaust Blown Diffuser */
}

void EBD2_shutdown(void) {
    EBD2_g_state.active = false;
}
