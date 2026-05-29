#include "GESintegration.h"
#include <string.h>

static GES_State GES_g_int_state;

void GES_integration_init(void) {
    memset(&GES_g_int_state, 0, sizeof(GES_g_int_state));
}

void GES_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    GES_update(dt_ms, &bridge->state, &GES_g_int_state, out);
    /* TODO: map GES outputs to global actuators (Ground Effect Sliding Skirts) */
}
