#include "GES.h"
#include <string.h>

static GES_State  GES_g_state;
static GES_Config GES_g_config;

void GES_init(const GES_Config* cfg) {
    if (cfg) GES_g_config = *cfg;
    else     memset(&GES_g_config, 0, sizeof(GES_g_config));
    memset(&GES_g_state, 0, sizeof(GES_g_state));
}

void GES_update(float dt_ms, const VehicleState* vs, GES_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) GES_g_state = *state;
    /* TODO: implement GES control logic for Ground Effect Sliding Skirts */
}

void GES_shutdown(void) {
    GES_g_state.active = false;
}
