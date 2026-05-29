#include "PAAdiagnostics.h"
#include <string.h>

static bool PAA_g_fault = false;

void PAA_diagnostics_init(void) {
    PAA_g_fault = false;
}

void PAA_diagnostics_run(const PAA_State* state) {
    (void)state;
    /* TODO: PAA diagnostic checks for Active Aerodynamics Porsche-style */
    PAA_g_fault = false;
}

bool PAA_diagnostics_has_fault(void) {
    return PAA_g_fault;
}

void PAA_diagnostics_clear(void) {
    PAA_g_fault = false;
}
