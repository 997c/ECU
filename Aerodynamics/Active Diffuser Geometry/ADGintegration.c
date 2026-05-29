#include "ADGintegration.h"
#include <string.h>

static ADG_State ADG_g_int_state;

void ADG_integration_init(void) {
    memset(&ADG_g_int_state, 0, sizeof(ADG_g_int_state));
}

void ADG_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    ADG_update(dt_ms, &bridge->state, &ADG_g_int_state, out);
    /* TODO: map ADG outputs to global actuators (Active Diffuser Geometry) */
}
