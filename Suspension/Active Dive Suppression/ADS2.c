#include "ADS2.h"
#include <string.h>

static ADS2_State  ADS2_g_state;
static ADS2_Config ADS2_g_config;

void ADS2_init(const ADS2_Config* cfg) {
    if (cfg) ADS2_g_config = *cfg;
    else     memset(&ADS2_g_config, 0, sizeof(ADS2_g_config));
    memset(&ADS2_g_state, 0, sizeof(ADS2_g_state));
}

void ADS2_update(float dt_ms, const VehicleState* vs, ADS2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ADS2_g_state = *state;
    /* TODO: implement ADS2 control logic for Active Dive Suppression */
}

void ADS2_shutdown(void) {
    ADS2_g_state.active = false;
}
