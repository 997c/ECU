#include "AFS.h"
#include <string.h>

static AFS_State  AFS_g_state;
static AFS_Config AFS_g_config;

void AFS_init(const AFS_Config* cfg) {
    if (cfg) AFS_g_config = *cfg;
    else     memset(&AFS_g_config, 0, sizeof(AFS_g_config));
    memset(&AFS_g_state, 0, sizeof(AFS_g_state));
}

void AFS_update(float dt_ms, const VehicleState* vs, AFS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AFS_g_state = *state;
    /* TODO: implement AFS control logic for Active Front Wing Angle */
}

void AFS_shutdown(void) {
    AFS_g_state.active = false;
}
