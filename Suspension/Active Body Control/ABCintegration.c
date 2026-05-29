#include "ABCintegration.h"
#include <string.h>

static ABC_State ABC_g_int_state;

void ABC_integration_init(void) {
    memset(&ABC_g_int_state, 0, sizeof(ABC_g_int_state));
}

void ABC_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ABC_update(dt_ms, &bridge->state, &ABC_g_int_state, out);
    /* TODO: map ABC outputs to global actuators (Active Body Control) */
}
