#include "ETC2.h"
#include <string.h>

static ETC2_State  ETC2_g_state;
static ETC2_Config ETC2_g_config;

void ETC2_init(const ETC2_Config* cfg) {
    if (cfg) ETC2_g_config = *cfg;
    else     memset(&ETC2_g_config, 0, sizeof(ETC2_g_config));
    memset(&ETC2_g_state, 0, sizeof(ETC2_g_state));
}

void ETC2_update(float dt_ms, const VehicleState* vs, ETC2_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) ETC2_g_state = *state;
    /* TODO: implement ETC2 control logic for Electric Torque Fill Auto */
}

void ETC2_shutdown(void) {
    ETC2_g_state.active = false;
}
