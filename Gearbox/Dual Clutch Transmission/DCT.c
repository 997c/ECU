#include "DCT.h"
#include <string.h>

static DCT_State  DCT_g_state;
static DCT_Config DCT_g_config;

void DCT_init(const DCT_Config* cfg) {
    if (cfg) DCT_g_config = *cfg;
    else     memset(&DCT_g_config, 0, sizeof(DCT_g_config));
    memset(&DCT_g_state, 0, sizeof(DCT_g_state));
}

void DCT_update(float dt_ms, const VehicleState* vs, DCT_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) DCT_g_state = *state;
    /* TODO: implement DCT control logic for Dual Clutch Transmission */
}

void DCT_shutdown(void) {
    DCT_g_state.active = false;
}
