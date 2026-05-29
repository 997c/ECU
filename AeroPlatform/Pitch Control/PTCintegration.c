#include "PTCintegration.h"
#include <string.h>

static PTC_State PTC_g_int_state;

void PTC_integration_init(void) {
    memset(&PTC_g_int_state, 0, sizeof(PTC_g_int_state));
}

void PTC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    PTC_update(dt_ms, &bridge->state, &PTC_g_int_state, out);
    /* TODO: map PTC outputs to global actuators (Pitch Control) */
}
