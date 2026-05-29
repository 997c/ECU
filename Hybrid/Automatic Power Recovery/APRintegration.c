#include "APRintegration.h"
#include <string.h>

static APR_State APR_g_int_state;

void APR_integration_init(void) {
    memset(&APR_g_int_state, 0, sizeof(APR_g_int_state));
}

void APR_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    APR_update(dt_ms, &bridge->state, &APR_g_int_state, out);
    /* TODO: map APR outputs to global actuators (Automatic Power Recovery) */
}
