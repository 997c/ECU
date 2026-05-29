#include "VSEdiagnostics.h"
#include <string.h>

static bool VSE_g_fault = false;

void VSE_diagnostics_init(void) {
    VSE_g_fault = false;
}

void VSE_diagnostics_run(const VSE_State* state) {
    (void)state;
    /* TODO: VSE diagnostic checks for Vehicle Speed Estimation */
    VSE_g_fault = false;
}

bool VSE_diagnostics_has_fault(void) {
    return VSE_g_fault;
}

void VSE_diagnostics_clear(void) {
    VSE_g_fault = false;
}
