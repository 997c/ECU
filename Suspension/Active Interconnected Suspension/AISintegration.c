#include "AISintegration.h"
#include <string.h>

static AIS_State AIS_g_int_state;

void AIS_integration_init(void) {
    memset(&AIS_g_int_state, 0, sizeof(AIS_g_int_state));
}

void AIS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AIS_update(dt_ms, &bridge->state, &AIS_g_int_state, out);
    /* TODO: map AIS outputs to global actuators (Active Interconnected Suspension) */
}
