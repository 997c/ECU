#include "SPLdiagnostics.h"
#include <string.h>

static bool SPL_g_fault = false;

void SPL_diagnostics_init(void) {
    SPL_g_fault = false;
}

void SPL_diagnostics_run(const SPL_State* state) {
    (void)state;
    /* TODO: SPL diagnostic checks for Sensor Plausibility Checking */
    SPL_g_fault = false;
}

bool SPL_diagnostics_has_fault(void) {
    return SPL_g_fault;
}

void SPL_diagnostics_clear(void) {
    SPL_g_fault = false;
}
