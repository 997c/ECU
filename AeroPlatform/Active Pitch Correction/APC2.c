#include "APC2.h"
#include <string.h>

static APC2_State  APC2_g_state;
static APC2_Config APC2_g_config;

void APC2_init(const APC2_Config* cfg) {
    if (cfg) APC2_g_config = *cfg;
    else     memset(&APC2_g_config, 0, sizeof(APC2_g_config));
    memset(&APC2_g_state, 0, sizeof(APC2_g_state));
}

void APC2_update(float dt_ms, const VehicleState* vs, APC2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) APC2_g_state = *state;
    /* TODO: implement APC2 control logic for Active Pitch Correction */
}

void APC2_shutdown(void) {
    APC2_g_state.active = false;
}
