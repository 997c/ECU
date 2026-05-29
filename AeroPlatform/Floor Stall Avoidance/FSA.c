#include "FSA.h"
#include <string.h>

static FSA_State  FSA_g_state;
static FSA_Config FSA_g_config;

void FSA_init(const FSA_Config* cfg) {
    if (cfg) FSA_g_config = *cfg;
    else     memset(&FSA_g_config, 0, sizeof(FSA_g_config));
    memset(&FSA_g_state, 0, sizeof(FSA_g_state));
}

void FSA_update(float dt_ms, const VehicleState* vs, FSA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FSA_g_state = *state;
    /* TODO: implement FSA control logic for Floor Stall Avoidance */
}

void FSA_shutdown(void) {
    FSA_g_state.active = false;
}
