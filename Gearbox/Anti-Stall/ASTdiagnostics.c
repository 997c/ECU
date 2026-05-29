#include "ASTdiagnostics.h"
#include <string.h>

static bool AST_g_fault = false;

void AST_diagnostics_init(void) {
    AST_g_fault = false;
}

void AST_diagnostics_run(const AST_State* state) {
    (void)state;
    /* TODO: AST diagnostic checks for Anti-Stall */
    AST_g_fault = false;
}

bool AST_diagnostics_has_fault(void) {
    return AST_g_fault;
}

void AST_diagnostics_clear(void) {
    AST_g_fault = false;
}
