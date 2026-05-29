#include "ABAintegration.h"
#include <string.h>

static ABA_State ABA_g_int_state;

void ABA_integration_init(void) {
    memset(&ABA_g_int_state, 0, sizeof(ABA_g_int_state));
}

void ABA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABA_update(dt_ms, &bridge->state, &ABA_g_int_state, out);
    /* TODO: map ABA outputs to global actuators (Aero Balance Control) */
}
