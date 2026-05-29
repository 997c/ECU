#include "MDM.h"
#include <string.h>

static MDM_State  MDM_g_state;
static MDM_Config MDM_g_config;

void MDM_init(const MDM_Config* cfg) {
    if (cfg) MDM_g_config = *cfg;
    else     memset(&MDM_g_config, 0, sizeof(MDM_g_config));
    memset(&MDM_g_state, 0, sizeof(MDM_g_state));
}

void MDM_update(float dt_ms, const VehicleState* vs, MDM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) MDM_g_state = *state;
    /* TODO: implement MDM control logic for Mid-Corner Diff Map */
}

void MDM_shutdown(void) {
    MDM_g_state.active = false;
}
