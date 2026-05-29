#include "CVTdiagnostics.h"
#include <string.h>

static bool CVT_g_fault = false;

void CVT_diagnostics_init(void) {
    CVT_g_fault = false;
}

void CVT_diagnostics_run(const CVT_State* state) {
    (void)state;
    /* TODO: CVT diagnostic checks for Continuously Variable Transmission */
    CVT_g_fault = false;
}

bool CVT_diagnostics_has_fault(void) {
    return CVT_g_fault;
}

void CVT_diagnostics_clear(void) {
    CVT_g_fault = false;
}
