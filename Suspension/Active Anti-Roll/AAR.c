#include "AAR.h"
#include <string.h>

static AAR_State  AAR_g_state;
static AAR_Config AAR_g_config;

void AAR_init(const AAR_Config* cfg) {
    if (cfg) AAR_g_config = *cfg;
    else     memset(&AAR_g_config, 0, sizeof(AAR_g_config));
    memset(&AAR_g_state, 0, sizeof(AAR_g_state));
}

void AAR_update(float dt_ms, const VehicleState* vs, AAR_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AAR_g_state = *state;
    /* TODO: implement AAR control logic for Active Anti-Roll */
}

void AAR_shutdown(void) {
    AAR_g_state.active = false;
}
