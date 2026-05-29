#include "AHB.h"
#include <string.h>

static AHB_State  AHB_g_state;
static AHB_Config AHB_g_config;

void AHB_init(const AHB_Config* cfg) {
    if (cfg) AHB_g_config = *cfg;
    else     memset(&AHB_g_config, 0, sizeof(AHB_g_config));
    memset(&AHB_g_state, 0, sizeof(AHB_g_state));
}

void AHB_update(float dt_ms, const VehicleState* vs, AHB_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AHB_g_state = *state;
    /* TODO: implement AHB control logic for Automatic Hybrid Boost Driver Aid */
}

void AHB_shutdown(void) {
    AHB_g_state.active = false;
}
