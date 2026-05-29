#include "FDW.h"
#include <string.h>

static FDW_State  FDW_g_state;
static FDW_Config FDW_g_config;

void FDW_init(const FDW_Config* cfg) {
    if (cfg) FDW_g_config = *cfg;
    else     memset(&FDW_g_config, 0, sizeof(FDW_g_config));
    memset(&FDW_g_state, 0, sizeof(FDW_g_state));
}

void FDW_update(float dt_ms, const VehicleState* vs, FDW_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FDW_g_state = *state;
    /* TODO: implement FDW control logic for F-Duct Driver-Operated Aero */
}

void FDW_shutdown(void) {
    FDW_g_state.active = false;
}
