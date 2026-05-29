#include "APC2diagnostics.h"
#include <string.h>

static bool APC2_g_fault = false;

void APC2_diagnostics_init(void) {
    APC2_g_fault = false;
}

void APC2_diagnostics_run(const APC2_State* state) {
    (void)state;
    /* TODO: APC2 diagnostic checks for Active Pitch Correction */
    APC2_g_fault = false;
}

bool APC2_diagnostics_has_fault(void) {
    return APC2_g_fault;
}

void APC2_diagnostics_clear(void) {
    APC2_g_fault = false;
}
