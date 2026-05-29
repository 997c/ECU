#include "FFLdiagnostics.h"
#include <string.h>

static bool FFL_g_fault = false;

void FFL_diagnostics_init(void) {
    FFL_g_fault = false;
}

void FFL_diagnostics_run(const FFL_State* state) {
    (void)state;
    /* TODO: FFL diagnostic checks for Fuel Flow Limit Optimizer */
    FFL_g_fault = false;
}

bool FFL_diagnostics_has_fault(void) {
    return FFL_g_fault;
}

void FFL_diagnostics_clear(void) {
    FFL_g_fault = false;
}
