#include "RHCdiagnostics.h"
#include <string.h>

static bool RHC_g_fault = false;

void RHC_diagnostics_init(void) {
    RHC_g_fault = false;
}

void RHC_diagnostics_run(const RHC_State* state) {
    (void)state;
    /* TODO: RHC diagnostic checks for Ride Height Control */
    RHC_g_fault = false;
}

bool RHC_diagnostics_has_fault(void) {
    return RHC_g_fault;
}

void RHC_diagnostics_clear(void) {
    RHC_g_fault = false;
}
