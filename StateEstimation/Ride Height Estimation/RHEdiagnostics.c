#include "RHEdiagnostics.h"
#include <string.h>

static bool RHE_g_fault = false;

void RHE_diagnostics_init(void) {
    RHE_g_fault = false;
}

void RHE_diagnostics_run(const RHE_State* state) {
    (void)state;
    /* TODO: RHE diagnostic checks for Ride Height Estimation */
    RHE_g_fault = false;
}

bool RHE_diagnostics_has_fault(void) {
    return RHE_g_fault;
}

void RHE_diagnostics_clear(void) {
    RHE_g_fault = false;
}
