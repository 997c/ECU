#include "ESC.h"
#include <string.h>

static ESC_State  ESC_g_state;
static ESC_Config ESC_g_config;

void ESC_init(const ESC_Config* cfg) {
    if (cfg) ESC_g_config = *cfg;
    else     memset(&ESC_g_config, 0, sizeof(ESC_g_config));
    memset(&ESC_g_state, 0, sizeof(ESC_g_state));
}

void ESC_update(float dt_ms, const VehicleState* vs, ESC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ESC_g_state = *state;
    /* TODO: implement ESC control logic for Electronic Stability Control */
}

void ESC_shutdown(void) {
    ESC_g_state.active = false;
}
