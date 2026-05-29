#include "TVBintegration.h"
#include <string.h>

static TVB_State TVB_g_int_state;

void TVB_integration_init(void) {
    memset(&TVB_g_int_state, 0, sizeof(TVB_g_int_state));
}

void TVB_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TVB_update(dt_ms, &bridge->state, &TVB_g_int_state, out);
    /* TODO: map TVB outputs to global actuators (Torque Vectoring by Brakes) */
}
