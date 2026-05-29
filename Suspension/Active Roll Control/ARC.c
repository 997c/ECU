#include "ARC.h"
#include <string.h>

static ARC_State  ARC_g_state;
static ARC_Config ARC_g_config;

void ARC_init(const ARC_Config* cfg) {
    if (cfg) ARC_g_config = *cfg;
    else     memset(&ARC_g_config, 0, sizeof(ARC_g_config));
    memset(&ARC_g_state, 0, sizeof(ARC_g_state));
}

void ARC_update(float dt_ms, const VehicleState* vs, ARC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ARC_g_state = *state;
    /* TODO: implement ARC control logic for Active Roll Control */
}

void ARC_shutdown(void) {
    ARC_g_state.active = false;
}
