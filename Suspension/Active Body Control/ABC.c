#include "ABC.h"
#include <string.h>

static ABC_State  ABC_g_state;
static ABC_Config ABC_g_config;

void ABC_init(const ABC_Config* cfg) {
    if (cfg) ABC_g_config = *cfg;
    else     memset(&ABC_g_config, 0, sizeof(ABC_g_config));
    memset(&ABC_g_state, 0, sizeof(ABC_g_state));
}

void ABC_update(float dt_ms, const VehicleState* vs, ABC_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ABC_g_state = *state;
    /* TODO: implement ABC control logic for Active Body Control */
}

void ABC_shutdown(void) {
    ABC_g_state.active = false;
}
