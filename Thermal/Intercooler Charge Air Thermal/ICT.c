#include "ICT.h"
#include <string.h>

static ICT_State  ICT_g_state;
static ICT_Config ICT_g_config;

void ICT_init(const ICT_Config* cfg) {
    if (cfg) ICT_g_config = *cfg;
    else     memset(&ICT_g_config, 0, sizeof(ICT_g_config));
    memset(&ICT_g_state, 0, sizeof(ICT_g_state));
}

void ICT_update(float dt_ms, const VehicleState* vs, ICT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ICT_g_state = *state;
    /* TODO: implement ICT control logic for Intercooler Charge Air Thermal */
}

void ICT_shutdown(void) {
    ICT_g_state.active = false;
}
