#include "EBM.h"
#include <string.h>

static EBM_State  EBM_g_state;
static EBM_Config EBM_g_config;

void EBM_init(const EBM_Config* cfg) {
    if (cfg) EBM_g_config = *cfg;
    else     memset(&EBM_g_config, 0, sizeof(EBM_g_config));
    memset(&EBM_g_state, 0, sizeof(EBM_g_state));
}

void EBM_update(float dt_ms, const VehicleState* vs, EBM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EBM_g_state = *state;
    /* TODO: implement EBM control logic for Engine Brake Map */
}

void EBM_shutdown(void) {
    EBM_g_state.active = false;
}
