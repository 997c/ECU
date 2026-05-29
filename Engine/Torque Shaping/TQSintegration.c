#include "TQSintegration.h"
#include <string.h>

static TQS_State TQS_g_int_state;

void TQS_integration_init(void) {
    memset(&TQS_g_int_state, 0, sizeof(TQS_g_int_state));
}

void TQS_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TQS_update(dt_ms, &bridge->state, &TQS_g_int_state, out);
    /* TODO: map TQS outputs to global actuators (Torque Shaping) */
}
