#include "ADG.h"
#include <string.h>

static ADG_State  ADG_g_state;
static ADG_Config ADG_g_config;

void ADG_init(const ADG_Config* cfg) {
    if (cfg) ADG_g_config = *cfg;
    else     memset(&ADG_g_config, 0, sizeof(ADG_g_config));
    memset(&ADG_g_state, 0, sizeof(ADG_g_state));
}

void ADG_update(float dt_ms, const VehicleState* vs, ADG_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ADG_g_state = *state;
    /* TODO: implement ADG control logic for Active Diffuser Geometry */
}

void ADG_shutdown(void) {
    ADG_g_state.active = false;
}
