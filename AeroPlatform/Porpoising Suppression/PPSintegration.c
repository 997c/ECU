#include "PPSintegration.h"
#include <string.h>

static PPS_State PPS_g_int_state;

void PPS_integration_init(void) {
    memset(&PPS_g_int_state, 0, sizeof(PPS_g_int_state));
}

void PPS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    PPS_update(dt_ms, &bridge->state, &PPS_g_int_state, out);
    /* TODO: map PPS outputs to global actuators (Porpoising Suppression) */
}
