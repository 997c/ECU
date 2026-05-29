#include "AWS.h"
#include <string.h>

static AWS_State  AWS_g_state;
static AWS_Config AWS_g_config;

void AWS_init(const AWS_Config* cfg) {
    if (cfg) AWS_g_config = *cfg;
    else     memset(&AWS_g_config, 0, sizeof(AWS_g_config));
    memset(&AWS_g_state, 0, sizeof(AWS_g_state));
}

void AWS_update(float dt_ms, const VehicleState* vs, AWS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AWS_g_state = *state;
    /* TODO: implement AWS control logic for All-Wheel Steering */
}

void AWS_shutdown(void) {
    AWS_g_state.active = false;
}
