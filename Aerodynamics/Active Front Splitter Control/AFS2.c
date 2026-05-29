#include "AFS2.h"
#include <string.h>

static AFS2_State  AFS2_g_state;
static AFS2_Config AFS2_g_config;

void AFS2_init(const AFS2_Config* cfg) {
    if (cfg) AFS2_g_config = *cfg;
    else     memset(&AFS2_g_config, 0, sizeof(AFS2_g_config));
    memset(&AFS2_g_state, 0, sizeof(AFS2_g_state));
}

void AFS2_update(float dt_ms, const VehicleState* vs, AFS2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFS2_g_state = *state;
    /* TODO: implement AFS2 control logic for Active Front Splitter Control */
}

void AFS2_shutdown(void) {
    AFS2_g_state.active = false;
}
