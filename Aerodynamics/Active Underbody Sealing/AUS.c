#include "AUS.h"
#include <string.h>

static AUS_State  AUS_g_state;
static AUS_Config AUS_g_config;

void AUS_init(const AUS_Config* cfg) {
    if (cfg) AUS_g_config = *cfg;
    else     memset(&AUS_g_config, 0, sizeof(AUS_g_config));
    memset(&AUS_g_state, 0, sizeof(AUS_g_state));
}

void AUS_update(float dt_ms, const VehicleState* vs, AUS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AUS_g_state = *state;
    /* TODO: implement AUS control logic for Active Underbody Sealing */
}

void AUS_shutdown(void) {
    AUS_g_state.active = false;
}
