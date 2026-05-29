#include "AYC.h"
#include <string.h>

static AYC_State  AYC_g_state;
static AYC_Config AYC_g_config;

void AYC_init(const AYC_Config* cfg) {
    if (cfg) AYC_g_config = *cfg;
    else     memset(&AYC_g_config, 0, sizeof(AYC_g_config));
    memset(&AYC_g_state, 0, sizeof(AYC_g_state));
}

void AYC_update(float dt_ms, const VehicleState* vs, AYC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AYC_g_state = *state;
    /* TODO: implement AYC control logic for Active Yaw Control */
}

void AYC_shutdown(void) {
    AYC_g_state.active = false;
}
