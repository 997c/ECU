#include "AKS.h"
#include <string.h>

static AKS_State  AKS_g_state;
static AKS_Config AKS_g_config;

void AKS_init(const AKS_Config* cfg) {
    if (cfg) AKS_g_config = *cfg;
    else     memset(&AKS_g_config, 0, sizeof(AKS_g_config));
    memset(&AKS_g_state, 0, sizeof(AKS_g_state));
}

void AKS_update(float dt_ms, const VehicleState* vs, AKS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AKS_g_state = *state;
    /* TODO: implement AKS control logic for Active Kinetic Suspension */
}

void AKS_shutdown(void) {
    AKS_g_state.active = false;
}
