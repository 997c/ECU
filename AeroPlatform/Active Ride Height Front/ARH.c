#include "ARH.h"
#include <string.h>

static ARH_State  ARH_g_state;
static ARH_Config ARH_g_config;

void ARH_init(const ARH_Config* cfg) {
    if (cfg) ARH_g_config = *cfg;
    else     memset(&ARH_g_config, 0, sizeof(ARH_g_config));
    memset(&ARH_g_state, 0, sizeof(ARH_g_state));
}

void ARH_update(float dt_ms, const VehicleState* vs, ARH_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARH_g_state = *state;
    /* TODO: implement ARH control logic for Active Ride Height Front */
}

void ARH_shutdown(void) {
    ARH_g_state.active = false;
}
