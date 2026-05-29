#include "ARD.h"
#include <string.h>

static ARD_State  ARD_g_state;
static ARD_Config ARD_g_config;

void ARD_init(const ARD_Config* cfg) {
    if (cfg) ARD_g_config = *cfg;
    else     memset(&ARD_g_config, 0, sizeof(ARD_g_config));
    memset(&ARD_g_state, 0, sizeof(ARD_g_state));
}

void ARD_update(float dt_ms, const VehicleState* vs, ARD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARD_g_state = *state;
    /* TODO: implement ARD control logic for Active Rear Differential Full Auto */
}

void ARD_shutdown(void) {
    ARD_g_state.active = false;
}
