#include "SLRdiagnostics.h"
#include <string.h>

static bool SLR_g_fault = false;

void SLR_diagnostics_init(void) {
    SLR_g_fault = false;
}

void SLR_diagnostics_run(const SLR_State* state) {
    (void)state;
    /* TODO: SLR diagnostic checks for Slip Ratio Target Control */
    SLR_g_fault = false;
}

bool SLR_diagnostics_has_fault(void) {
    return SLR_g_fault;
}

void SLR_diagnostics_clear(void) {
    SLR_g_fault = false;
}
