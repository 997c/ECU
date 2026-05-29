#include "FDTintegration.h"
#include <string.h>

static FDT_State FDT_g_int_state;

void FDT_integration_init(void) {
    memset(&FDT_g_int_state, 0, sizeof(FDT_g_int_state));
}

void FDT_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FDT_update(dt_ms, &bridge->state, &FDT_g_int_state, out);
    /* TODO: map FDT outputs to global actuators (Fault Detection) */
}
