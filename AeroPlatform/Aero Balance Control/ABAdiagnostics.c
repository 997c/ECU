#include "ABAdiagnostics.h"
#include <string.h>

static bool ABA_g_fault = false;

void ABA_diagnostics_init(void) {
    ABA_g_fault = false;
}

void ABA_diagnostics_run(const ABA_State* state) {
    (void)state;
    /* TODO: ABA diagnostic checks for Aero Balance Control */
    ABA_g_fault = false;
}

bool ABA_diagnostics_has_fault(void) {
    return ABA_g_fault;
}

void ABA_diagnostics_clear(void) {
    ABA_g_fault = false;
}
