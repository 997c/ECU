#include "TLMintegration.h"
#include <string.h>

static TLM_State TLM_g_int_state;

void TLM_integration_init(void) {
    memset(&TLM_g_int_state, 0, sizeof(TLM_g_int_state));
}

void TLM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TLM_update(dt_ms, &bridge->state, &TLM_g_int_state, out);
    /* TODO: map TLM outputs to global actuators (Live Telemetry System) */
}
