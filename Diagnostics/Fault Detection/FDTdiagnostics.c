#include "FDTdiagnostics.h"
#include <string.h>

static bool FDT_g_fault = false;

void FDT_diagnostics_init(void) {
    FDT_g_fault = false;
}

void FDT_diagnostics_run(const FDT_State* state) {
    (void)state;
    /* TODO: FDT diagnostic checks for Fault Detection */
    FDT_g_fault = false;
}

bool FDT_diagnostics_has_fault(void) {
    return FDT_g_fault;
}

void FDT_diagnostics_clear(void) {
    FDT_g_fault = false;
}
