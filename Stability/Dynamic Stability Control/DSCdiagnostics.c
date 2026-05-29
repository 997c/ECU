#include "DSCdiagnostics.h"
#include <string.h>

static bool DSC_g_fault = false;

void DSC_diagnostics_init(void) {
    DSC_g_fault = false;
}

void DSC_diagnostics_run(const DSC_State* state) {
    (void)state;
    /* TODO: DSC diagnostic checks for Dynamic Stability Control */
    DSC_g_fault = false;
}

bool DSC_diagnostics_has_fault(void) {
    return DSC_g_fault;
}

void DSC_diagnostics_clear(void) {
    DSC_g_fault = false;
}
