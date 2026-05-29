#include "ABSdiagnostics.h"
#include <string.h>

static bool ABS_g_fault = false;

void ABS_diagnostics_init(void) {
    ABS_g_fault = false;
}

void ABS_diagnostics_run(const ABS_State* state) {
    (void)state;
    /* TODO: ABS diagnostic checks for Anti-lock Braking System */
    ABS_g_fault = false;
}

bool ABS_diagnostics_has_fault(void) {
    return ABS_g_fault;
}

void ABS_diagnostics_clear(void) {
    ABS_g_fault = false;
}
