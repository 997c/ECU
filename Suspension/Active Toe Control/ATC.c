#include "ATC.h"
#include <string.h>

static ATC_State  ATC_g_state;
static ATC_Config ATC_g_config;

void ATC_init(const ATC_Config* cfg) {
    if (cfg) ATC_g_config = *cfg;
    else     memset(&ATC_g_config, 0, sizeof(ATC_g_config));
    memset(&ATC_g_state, 0, sizeof(ATC_g_state));
}

void ATC_update(float dt_ms, const VehicleState* vs, ATC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ATC_g_state = *state;
    /* TODO: implement ATC control logic for Active Toe Control */
}

void ATC_shutdown(void) {
    ATC_g_state.active = false;
}
