#include "BSD.h"
#include <string.h>

static BSD_State  BSD_g_state;
static BSD_Config BSD_g_config;

void BSD_init(const BSD_Config* cfg) {
    if (cfg) BSD_g_config = *cfg;
    else     memset(&BSD_g_config, 0, sizeof(BSD_g_config));
    memset(&BSD_g_state, 0, sizeof(BSD_g_state));
}

void BSD_update(float dt_ms, const VehicleState* vs, BSD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BSD_g_state = *state;
    /* TODO: implement BSD control logic for Brake Steer Differential Braking */
}

void BSD_shutdown(void) {
    BSD_g_state.active = false;
}
