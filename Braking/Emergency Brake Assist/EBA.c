#include "EBA.h"
#include <string.h>

static EBA_State  EBA_g_state;
static EBA_Config EBA_g_config;

void EBA_init(const EBA_Config* cfg) {
    if (cfg) EBA_g_config = *cfg;
    else     memset(&EBA_g_config, 0, sizeof(EBA_g_config));
    memset(&EBA_g_state, 0, sizeof(EBA_g_state));
}

void EBA_update(float dt_ms, const VehicleState* vs, EBA_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EBA_g_state = *state;
    /* TODO: implement EBA control logic for Emergency Brake Assist */
}

void EBA_shutdown(void) {
    EBA_g_state.active = false;
}
