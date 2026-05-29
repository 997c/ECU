#include "FDWintegration.h"
#include <string.h>

static FDW_State FDW_g_int_state;

void FDW_integration_init(void) {
    memset(&FDW_g_int_state, 0, sizeof(FDW_g_int_state));
}

void FDW_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    FDW_update(dt_ms, &bridge->state, &FDW_g_int_state, out);
    /* TODO: map FDW outputs to global actuators (F-Duct Driver-Operated Aero) */
}
