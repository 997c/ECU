#include "ASTsafety.h"
#include <string.h>

bool AST_safety_check(const VehicleState* vs, const AST_State* state) {
    (void)vs; (void)state;
    /* TODO: AST safety limits for Anti-Stall */
    return true;
}

void AST_safety_enter_failsoft(AST_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
