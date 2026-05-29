#include "PLSdiagnostics.h"
#include <string.h>

static bool PLS_g_fault = false;

void PLS_diagnostics_init(void) {
    PLS_g_fault = false;
}

void PLS_diagnostics_run(const PLS_State* state) {
    (void)state;
    /* TODO: PLS diagnostic checks for Pit Lane Speed Limiter */
    PLS_g_fault = false;
}

bool PLS_diagnostics_has_fault(void) {
    return PLS_g_fault;
}

void PLS_diagnostics_clear(void) {
    PLS_g_fault = false;
}
