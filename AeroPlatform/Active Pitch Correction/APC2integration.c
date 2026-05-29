#include "APC2integration.h"
#include <string.h>

static APC2_State APC2_g_int_state;

void APC2_integration_init(void) {
    memset(&APC2_g_int_state, 0, sizeof(APC2_g_int_state));
}

void APC2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    APC2_update(dt_ms, &bridge->state, &APC2_g_int_state, out);
    /* TODO: map APC2 outputs to global actuators (Active Pitch Correction) */
}
