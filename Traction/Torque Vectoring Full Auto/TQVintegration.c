#include "TQVintegration.h"
#include <string.h>

static TQV_State TQV_g_int_state;

void TQV_integration_init(void) {
    memset(&TQV_g_int_state, 0, sizeof(TQV_g_int_state));
}

void TQV_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TQV_update(dt_ms, &bridge->state, &TQV_g_int_state, out);
    /* TODO: map TQV outputs to global actuators (Torque Vectoring Full Auto) */
}
