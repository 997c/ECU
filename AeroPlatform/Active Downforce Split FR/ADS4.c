#include "ADS4.h"
#include <string.h>

static ADS4_State  ADS4_g_state;
static ADS4_Config ADS4_g_config;

void ADS4_init(const ADS4_Config* cfg) {
    if (cfg) ADS4_g_config = *cfg;
    else     memset(&ADS4_g_config, 0, sizeof(ADS4_g_config));
    memset(&ADS4_g_state, 0, sizeof(ADS4_g_state));
}

void ADS4_update(float dt_ms, const VehicleState* vs, ADS4_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ADS4_g_state = *state;
    /* TODO: implement ADS4 control logic for Active Downforce Split FR */
}

void ADS4_shutdown(void) {
    ADS4_g_state.active = false;
}
