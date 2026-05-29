#include "CBP.h"
#include <string.h>

static CBP_State  CBP_g_state;
static CBP_Config CBP_g_config;

void CBP_init(const CBP_Config* cfg) {
    if (cfg) CBP_g_config = *cfg;
    else     memset(&CBP_g_config, 0, sizeof(CBP_g_config));
    memset(&CBP_g_state, 0, sizeof(CBP_g_state));
}

void CBP_update(float dt_ms, const VehicleState* vs, CBP_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) CBP_g_state = *state;
    /* TODO: implement CBP control logic for Clutch Bite-Point Control */
}

void CBP_shutdown(void) {
    CBP_g_state.active = false;
}
