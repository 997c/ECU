#include "EBAintegration.h"
#include <string.h>

static EBA_State EBA_g_int_state;

void EBA_integration_init(void) {
    memset(&EBA_g_int_state, 0, sizeof(EBA_g_int_state));
}

void EBA_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    EBA_update(dt_ms, &bridge->state, &EBA_g_int_state, out);
    /* TODO: map EBA outputs to global actuators (Emergency Brake Assist) */
}
