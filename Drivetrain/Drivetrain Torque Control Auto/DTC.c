#include "DTC.h"
#include <string.h>

static DTC_State  DTC_g_state;
static DTC_Config DTC_g_config;

void DTC_init(const DTC_Config* cfg) {
    if (cfg) DTC_g_config = *cfg;
    else     memset(&DTC_g_config, 0, sizeof(DTC_g_config));
    memset(&DTC_g_state, 0, sizeof(DTC_g_state));
}

void DTC_update(float dt_ms, const VehicleState* vs, DTC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DTC_g_state = *state;
    /* TODO: implement DTC control logic for Drivetrain Torque Control Auto */
}

void DTC_shutdown(void) {
    DTC_g_state.active = false;
}
