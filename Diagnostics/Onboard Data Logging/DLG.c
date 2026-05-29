#include "DLG.h"
#include <string.h>

static DLG_State  DLG_g_state;
static DLG_Config DLG_g_config;

void DLG_init(const DLG_Config* cfg) {
    if (cfg) DLG_g_config = *cfg;
    else     memset(&DLG_g_config, 0, sizeof(DLG_g_config));
    memset(&DLG_g_state, 0, sizeof(DLG_g_state));
}

void DLG_update(float dt_ms, const VehicleState* vs, DLG_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DLG_g_state = *state;
    /* TODO: implement DLG control logic for Onboard Data Logging */
}

void DLG_shutdown(void) {
    DLG_g_state.active = false;
}
