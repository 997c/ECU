#include "ARH2.h"
#include <string.h>

static ARH2_State  ARH2_g_state;
static ARH2_Config ARH2_g_config;

void ARH2_init(const ARH2_Config* cfg) {
    if (cfg) ARH2_g_config = *cfg;
    else     memset(&ARH2_g_config, 0, sizeof(ARH2_g_config));
    memset(&ARH2_g_state, 0, sizeof(ARH2_g_state));
}

void ARH2_update(float dt_ms, const VehicleState* vs, ARH2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARH2_g_state = *state;
    /* TODO: implement ARH2 control logic for Active Ride Height Rear */
}

void ARH2_shutdown(void) {
    ARH2_g_state.active = false;
}
