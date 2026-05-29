#include "FCSintegration.h"
#include <string.h>

static FCS_State FCS_g_int_state;

void FCS_integration_init(void) {
    memset(&FCS_g_int_state, 0, sizeof(FCS_g_int_state));
}

void FCS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FCS_update(dt_ms, &bridge->state, &FCS_g_int_state, out);
    /* TODO: map FCS outputs to global actuators (Fan Car Suction System) */
}
