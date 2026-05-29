#include "TVEintegration.h"
#include <string.h>

static TVE_State TVE_g_int_state;

void TVE_integration_init(void) {
    memset(&TVE_g_int_state, 0, sizeof(TVE_g_int_state));
}

void TVE_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    TVE_update(dt_ms, &bridge->state, &TVE_g_int_state, out);
    /* TODO: map TVE outputs to global actuators (Torque Vectoring by Electric Motor) */
}
