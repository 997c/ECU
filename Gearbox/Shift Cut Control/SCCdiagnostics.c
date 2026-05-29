#include "SCCdiagnostics.h"
#include <string.h>

static bool SCC_g_fault = false;

void SCC_diagnostics_init(void) {
    SCC_g_fault = false;
}

void SCC_diagnostics_run(const SCC_State* state) {
    (void)state;
    /* TODO: SCC diagnostic checks for Shift Cut Control */
    SCC_g_fault = false;
}

bool SCC_diagnostics_has_fault(void) {
    return SCC_g_fault;
}

void SCC_diagnostics_clear(void) {
    SCC_g_fault = false;
}
