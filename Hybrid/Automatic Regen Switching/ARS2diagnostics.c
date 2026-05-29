#include "ARS2diagnostics.h"
#include <string.h>

static bool ARS2_g_fault = false;

void ARS2_diagnostics_init(void) {
    ARS2_g_fault = false;
}

void ARS2_diagnostics_run(const ARS2_State* state) {
    (void)state;
    /* TODO: ARS2 diagnostic checks for Automatic Regen Switching */
    ARS2_g_fault = false;
}

bool ARS2_diagnostics_has_fault(void) {
    return ARS2_g_fault;
}

void ARS2_diagnostics_clear(void) {
    ARS2_g_fault = false;
}
