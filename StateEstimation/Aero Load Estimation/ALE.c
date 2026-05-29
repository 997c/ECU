#include "ALE.h"
#include <string.h>

static ALE_State  ALE_g_state;
static ALE_Config ALE_g_config;

void ALE_init(const ALE_Config* cfg) {
    if (cfg) ALE_g_config = *cfg;
    else     memset(&ALE_g_config, 0, sizeof(ALE_g_config));
    memset(&ALE_g_state, 0, sizeof(ALE_g_state));
}

void ALE_update(float dt_ms, const VehicleState* vs, ALE_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ALE_g_state = *state;
    /* TODO: implement ALE control logic for Aero Load Estimation */
}

void ALE_shutdown(void) {
    ALE_g_state.active = false;
}
