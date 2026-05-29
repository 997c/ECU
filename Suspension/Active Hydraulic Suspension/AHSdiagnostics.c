#include "AHSdiagnostics.h"
#include <string.h>

static bool AHS_g_fault = false;

void AHS_diagnostics_init(void) {
    AHS_g_fault = false;
}

void AHS_diagnostics_run(const AHS_State* state) {
    (void)state;
    /* TODO: AHS diagnostic checks for Active Hydraulic Suspension */
    AHS_g_fault = false;
}

bool AHS_diagnostics_has_fault(void) {
    return AHS_g_fault;
}

void AHS_diagnostics_clear(void) {
    AHS_g_fault = false;
}
