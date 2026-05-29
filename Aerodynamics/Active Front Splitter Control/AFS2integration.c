#include "AFS2integration.h"
#include <string.h>

static AFS2_State AFS2_g_int_state;

void AFS2_integration_init(void) {
    memset(&AFS2_g_int_state, 0, sizeof(AFS2_g_int_state));
}

void AFS2_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AFS2_update(dt_ms, &bridge->state, &AFS2_g_int_state, out);
    /* TODO: map AFS2 outputs to global actuators (Active Front Splitter Control) */
}
