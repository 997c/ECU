#include "ALAdiagnostics.h"
#include <string.h>

static bool ALA_g_fault = false;

void ALA_diagnostics_init(void) {
    ALA_g_fault = false;
}

void ALA_diagnostics_run(const ALA_State* state) {
    (void)state;
    /* TODO: ALA diagnostic checks for Active Aero Lamborghini-style */
    ALA_g_fault = false;
}

bool ALA_diagnostics_has_fault(void) {
    return ALA_g_fault;
}

void ALA_diagnostics_clear(void) {
    ALA_g_fault = false;
}
