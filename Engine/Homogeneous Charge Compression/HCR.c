#include "HCR.h"
#include <string.h>

static HCR_State  HCR_g_state;
static HCR_Config HCR_g_config;

void HCR_init(const HCR_Config* cfg) {
    if (cfg) HCR_g_config = *cfg;
    else     memset(&HCR_g_config, 0, sizeof(HCR_g_config));
    memset(&HCR_g_state, 0, sizeof(HCR_g_state));
}

void HCR_update(float dt_ms, const VehicleState* vs, HCR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) HCR_g_state = *state;
    /* TODO: implement HCR control logic for Homogeneous Charge Compression */
}

void HCR_shutdown(void) {
    HCR_g_state.active = false;
}
