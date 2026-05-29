#include "CVT.h"
#include <string.h>

static CVT_State  CVT_g_state;
static CVT_Config CVT_g_config;

void CVT_init(const CVT_Config* cfg) {
    if (cfg) CVT_g_config = *cfg;
    else     memset(&CVT_g_config, 0, sizeof(CVT_g_config));
    memset(&CVT_g_state, 0, sizeof(CVT_g_state));
}

void CVT_update(float dt_ms, const VehicleState* vs, CVT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) CVT_g_state = *state;
    /* TODO: implement CVT control logic for Continuously Variable Transmission */
}

void CVT_shutdown(void) {
    CVT_g_state.active = false;
}
