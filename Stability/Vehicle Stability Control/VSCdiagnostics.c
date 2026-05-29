#include "VSCdiagnostics.h"
#include <string.h>

static bool VSC_g_fault = false;

void VSC_diagnostics_init(void) {
    VSC_g_fault = false;
}

void VSC_diagnostics_run(const VSC_State* state) {
    (void)state;
    /* TODO: VSC diagnostic checks for Vehicle Stability Control */
    VSC_g_fault = false;
}

bool VSC_diagnostics_has_fault(void) {
    return VSC_g_fault;
}

void VSC_diagnostics_clear(void) {
    VSC_g_fault = false;
}
