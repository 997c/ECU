#include "ADS.h"
#include <string.h>

static ADS_State  ADS_g_state;
static ADS_Config ADS_g_config;

void ADS_init(const ADS_Config* cfg) {
    if (cfg) ADS_g_config = *cfg;
    else     memset(&ADS_g_config, 0, sizeof(ADS_g_config));
    memset(&ADS_g_state, 0, sizeof(ADS_g_state));
}

void ADS_update(float dt_ms, const VehicleState* vs, ADS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ADS_g_state = *state;
    /* TODO: implement ADS control logic for Adaptive Damping System */
}

void ADS_shutdown(void) {
    ADS_g_state.active = false;
}
