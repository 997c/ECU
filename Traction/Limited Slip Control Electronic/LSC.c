#include "LSC.h"
#include <string.h>

static LSC_State  LSC_g_state;
static LSC_Config LSC_g_config;

void LSC_init(const LSC_Config* cfg) {
    if (cfg) LSC_g_config = *cfg;
    else     memset(&LSC_g_config, 0, sizeof(LSC_g_config));
    memset(&LSC_g_state, 0, sizeof(LSC_g_state));
}

void LSC_update(float dt_ms, const VehicleState* vs, LSC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) LSC_g_state = *state;
    /* TODO: implement LSC control logic for Limited Slip Control Electronic */
}

void LSC_shutdown(void) {
    LSC_g_state.active = false;
}
