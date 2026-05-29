#include "ECT.h"
#include <string.h>

static ECT_State  ECT_g_state;
static ECT_Config ECT_g_config;

void ECT_init(const ECT_Config* cfg) {
    if (cfg) ECT_g_config = *cfg;
    else     memset(&ECT_g_config, 0, sizeof(ECT_g_config));
    memset(&ECT_g_state, 0, sizeof(ECT_g_state));
}

void ECT_update(float dt_ms, const VehicleState* vs, ECT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ECT_g_state = *state;
    /* TODO: implement ECT control logic for Engine Coolant Thermal Mgmt */
}

void ECT_shutdown(void) {
    ECT_g_state.active = false;
}
