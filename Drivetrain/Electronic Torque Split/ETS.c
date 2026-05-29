#include "ETS.h"
#include <string.h>

static ETS_State  ETS_g_state;
static ETS_Config ETS_g_config;

void ETS_init(const ETS_Config* cfg) {
    if (cfg) ETS_g_config = *cfg;
    else     memset(&ETS_g_config, 0, sizeof(ETS_g_config));
    memset(&ETS_g_state, 0, sizeof(ETS_g_state));
}

void ETS_update(float dt_ms, const VehicleState* vs, ETS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ETS_g_state = *state;
    /* TODO: implement ETS control logic for Electronic Torque Split */
}

void ETS_shutdown(void) {
    ETS_g_state.active = false;
}
