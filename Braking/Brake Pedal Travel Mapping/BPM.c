#include "BPM.h"
#include <string.h>

static BPM_State  BPM_g_state;
static BPM_Config BPM_g_config;

void BPM_init(const BPM_Config* cfg) {
    if (cfg) BPM_g_config = *cfg;
    else     memset(&BPM_g_config, 0, sizeof(BPM_g_config));
    memset(&BPM_g_state, 0, sizeof(BPM_g_state));
}

void BPM_update(float dt_ms, const VehicleState* vs, BPM_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) BPM_g_state = *state;
    /* TODO: implement BPM control logic for Brake Pedal Travel Mapping */
}

void BPM_shutdown(void) {
    BPM_g_state.active = false;
}
