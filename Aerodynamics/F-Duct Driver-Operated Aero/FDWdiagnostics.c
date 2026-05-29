#include "FDWdiagnostics.h"
#include <string.h>

static bool FDW_g_fault = false;

void FDW_diagnostics_init(void) {
    FDW_g_fault = false;
}

void FDW_diagnostics_run(const FDW_State* state) {
    (void)state;
    /* TODO: FDW diagnostic checks for F-Duct Driver-Operated Aero */
    FDW_g_fault = false;
}

bool FDW_diagnostics_has_fault(void) {
    return FDW_g_fault;
}

void FDW_diagnostics_clear(void) {
    FDW_g_fault = false;
}
