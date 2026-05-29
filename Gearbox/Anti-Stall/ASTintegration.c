#include "ASTintegration.h"
#include <string.h>

static AST_State AST_g_int_state;

void AST_integration_init(void) {
    memset(&AST_g_int_state, 0, sizeof(AST_g_int_state));
}

void AST_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    AST_update(dt_ms, &bridge->state, &AST_g_int_state, out);
    /* TODO: map AST outputs to global actuators (Anti-Stall) */
}
