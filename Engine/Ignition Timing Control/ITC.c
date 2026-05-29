#include "ITC.h"
#include <string.h>

static ITC_State  ITC_g_state;
static ITC_Config ITC_g_config;

void ITC_init(const ITC_Config* cfg) {
    if (cfg) ITC_g_config = *cfg;
    else     memset(&ITC_g_config, 0, sizeof(ITC_g_config));
    memset(&ITC_g_state, 0, sizeof(ITC_g_state));
}

void ITC_update(float dt_ms, const VehicleState* vs, ITC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ITC_g_state = *state;
    /* TODO: implement ITC control logic for Ignition Timing Control */
}

void ITC_shutdown(void) {
    ITC_g_state.active = false;
}
