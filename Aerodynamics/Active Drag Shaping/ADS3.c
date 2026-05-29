#include "ADS3.h"
#include <string.h>

static ADS3_State  ADS3_g_state;
static ADS3_Config ADS3_g_config;

void ADS3_init(const ADS3_Config* cfg) {
    if (cfg) ADS3_g_config = *cfg;
    else     memset(&ADS3_g_config, 0, sizeof(ADS3_g_config));
    memset(&ADS3_g_state, 0, sizeof(ADS3_g_state));
}

void ADS3_update(float dt_ms, const VehicleState* vs, ADS3_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ADS3_g_state = *state;
    /* TODO: implement ADS3 control logic for Active Drag Shaping */
}

void ADS3_shutdown(void) {
    ADS3_g_state.active = false;
}
