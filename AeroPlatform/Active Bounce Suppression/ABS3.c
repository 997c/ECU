#include "ABS3.h"
#include <string.h>

static ABS3_State  ABS3_g_state;
static ABS3_Config ABS3_g_config;

void ABS3_init(const ABS3_Config* cfg) {
    if (cfg) ABS3_g_config = *cfg;
    else     memset(&ABS3_g_config, 0, sizeof(ABS3_g_config));
    memset(&ABS3_g_state, 0, sizeof(ABS3_g_state));
}

void ABS3_update(float dt_ms, const VehicleState* vs, ABS3_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABS3_g_state = *state;
    /* TODO: implement ABS3 control logic for Active Bounce Suppression */
}

void ABS3_shutdown(void) {
    ABS3_g_state.active = false;
}
