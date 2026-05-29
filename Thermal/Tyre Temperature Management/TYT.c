#include "TYT.h"
#include <string.h>

static TYT_State  TYT_g_state;
static TYT_Config TYT_g_config;

void TYT_init(const TYT_Config* cfg) {
    if (cfg) TYT_g_config = *cfg;
    else     memset(&TYT_g_config, 0, sizeof(TYT_g_config));
    memset(&TYT_g_state, 0, sizeof(TYT_g_state));
}

void TYT_update(float dt_ms, const VehicleState* vs, TYT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) TYT_g_state = *state;
    /* TODO: implement TYT control logic for Tyre Temperature Management */
}

void TYT_shutdown(void) {
    TYT_g_state.active = false;
}
