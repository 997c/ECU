#include "FDT.h"
#include <string.h>

static FDT_State  FDT_g_state;
static FDT_Config FDT_g_config;

void FDT_init(const FDT_Config* cfg) {
    if (cfg) FDT_g_config = *cfg;
    else     memset(&FDT_g_config, 0, sizeof(FDT_g_config));
    memset(&FDT_g_state, 0, sizeof(FDT_g_state));
}

void FDT_update(float dt_ms, const VehicleState* vs, FDT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) FDT_g_state = *state;
    /* TODO: implement FDT control logic for Fault Detection */
}

void FDT_shutdown(void) {
    FDT_g_state.active = false;
}
