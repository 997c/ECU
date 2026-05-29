#include "AHBintegration.h"
#include <string.h>

static AHB_State AHB_g_int_state;

void AHB_integration_init(void) {
    memset(&AHB_g_int_state, 0, sizeof(AHB_g_int_state));
}

void AHB_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AHB_update(dt_ms, &bridge->state, &AHB_g_int_state, out);
    /* TODO: map AHB outputs to global actuators (Automatic Hybrid Boost Driver Aid) */
}
