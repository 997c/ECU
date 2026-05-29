#include "DDS.h"
#include <string.h>

static DDS_State  DDS_g_state;
static DDS_Config DDS_g_config;

void DDS_init(const DDS_Config* cfg) {
    if (cfg) DDS_g_config = *cfg;
    else     memset(&DDS_g_config, 0, sizeof(DDS_g_config));
    memset(&DDS_g_state, 0, sizeof(DDS_g_state));
}

void DDS_update(float dt_ms, const VehicleState* vs, DDS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DDS_g_state = *state;
    /* TODO: implement DDS control logic for Double Diffuser System */
}

void DDS_shutdown(void) {
    DDS_g_state.active = false;
}
