#include "EBD.h"
#include <string.h>

static EBD_State  EBD_g_state;
static EBD_Config EBD_g_config;

void EBD_init(const EBD_Config* cfg) {
    if (cfg) EBD_g_config = *cfg;
    else     memset(&EBD_g_config, 0, sizeof(EBD_g_config));
    memset(&EBD_g_state, 0, sizeof(EBD_g_state));
}

void EBD_update(float dt_ms, const VehicleState* vs, EBD_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EBD_g_state = *state;
    /* TODO: implement EBD control logic for Electronic Brakeforce Distribution */
}

void EBD_shutdown(void) {
    EBD_g_state.active = false;
}
