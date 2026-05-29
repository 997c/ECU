#include "EIS.h"
#include <string.h>

static EIS_State  EIS_g_state;
static EIS_Config EIS_g_config;

void EIS_init(const EIS_Config* cfg) {
    if (cfg) EIS_g_config = *cfg;
    else     memset(&EIS_g_config, 0, sizeof(EIS_g_config));
    memset(&EIS_g_state, 0, sizeof(EIS_g_state));
}

void EIS_update(float dt_ms, const VehicleState* vs, EIS_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) EIS_g_state = *state;
    /* TODO: implement EIS control logic for ERS Isolation Safety */
}

void EIS_shutdown(void) {
    EIS_g_state.active = false;
}
