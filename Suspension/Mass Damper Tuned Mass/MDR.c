#include "MDR.h"
#include <string.h>

static MDR_State  MDR_g_state;
static MDR_Config MDR_g_config;

void MDR_init(const MDR_Config* cfg) {
    if (cfg) MDR_g_config = *cfg;
    else     memset(&MDR_g_config, 0, sizeof(MDR_g_config));
    memset(&MDR_g_state, 0, sizeof(MDR_g_state));
}

void MDR_update(float dt_ms, const VehicleState* vs, MDR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) MDR_g_state = *state;
    /* TODO: implement MDR control logic for Mass Damper Tuned Mass */
}

void MDR_shutdown(void) {
    MDR_g_state.active = false;
}
