#include "AARintegration.h"
#include <string.h>

static AAR_State AAR_g_int_state;

void AAR_integration_init(void) {
    memset(&AAR_g_int_state, 0, sizeof(AAR_g_int_state));
}

void AAR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AAR_update(dt_ms, &bridge->state, &AAR_g_int_state, out);
    /* TODO: map AAR outputs to global actuators (Active Anti-Roll) */
}
