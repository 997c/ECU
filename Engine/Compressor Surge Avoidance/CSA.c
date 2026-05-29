#include "CSA.h"
#include <string.h>

static CSA_State  CSA_g_state;
static CSA_Config CSA_g_config;

void CSA_init(const CSA_Config* cfg) {
    if (cfg) CSA_g_config = *cfg;
    else     memset(&CSA_g_config, 0, sizeof(CSA_g_config));
    memset(&CSA_g_state, 0, sizeof(CSA_g_state));
}

void CSA_update(float dt_ms, const VehicleState* vs, CSA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) CSA_g_state = *state;
    /* TODO: implement CSA control logic for Compressor Surge Avoidance */
}

void CSA_shutdown(void) {
    CSA_g_state.active = false;
}
