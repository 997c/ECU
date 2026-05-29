#include "AIS.h"
#include <string.h>

static AIS_State  AIS_g_state;
static AIS_Config AIS_g_config;

void AIS_init(const AIS_Config* cfg) {
    if (cfg) AIS_g_config = *cfg;
    else     memset(&AIS_g_config, 0, sizeof(AIS_g_config));
    memset(&AIS_g_state, 0, sizeof(AIS_g_state));
}

void AIS_update(float dt_ms, const VehicleState* vs, AIS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AIS_g_state = *state;
    /* TODO: implement AIS control logic for Active Interconnected Suspension */
}

void AIS_shutdown(void) {
    AIS_g_state.active = false;
}
