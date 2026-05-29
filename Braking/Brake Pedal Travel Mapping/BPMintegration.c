#include "BPMintegration.h"
#include <string.h>

static BPM_State BPM_g_int_state;

void BPM_integration_init(void) {
    memset(&BPM_g_int_state, 0, sizeof(BPM_g_int_state));
}

void BPM_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    BPM_update(dt_ms, &bridge->state, &BPM_g_int_state, out);
    /* TODO: map BPM outputs to global actuators (Brake Pedal Travel Mapping) */
}
