#include "AST.h"
#include <string.h>

static AST_State  AST_g_state;
static AST_Config AST_g_config;

void AST_init(const AST_Config* cfg) {
    if (cfg) AST_g_config = *cfg;
    else     memset(&AST_g_config, 0, sizeof(AST_g_config));
    memset(&AST_g_state, 0, sizeof(AST_g_state));
}

void AST_update(float dt_ms, const VehicleState* vs, AST_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) AST_g_state = *state;
    /* TODO: implement AST control logic for Anti-Stall */
}

void AST_shutdown(void) {
    AST_g_state.active = false;
}
