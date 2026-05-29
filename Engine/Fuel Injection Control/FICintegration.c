#include "FICintegration.h"
#include <string.h>

static FIC_State FIC_g_int_state;

void FIC_integration_init(void) {
    memset(&FIC_g_int_state, 0, sizeof(FIC_g_int_state));
}

void FIC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FIC_update(dt_ms, &bridge->state, &FIC_g_int_state, out);
    /* TODO: map FIC outputs to global actuators (Fuel Injection Control) */
}
