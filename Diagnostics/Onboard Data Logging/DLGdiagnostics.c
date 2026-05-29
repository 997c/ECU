#include "DLGdiagnostics.h"
#include <string.h>

static bool DLG_g_fault = false;

void DLG_diagnostics_init(void) {
    DLG_g_fault = false;
}

void DLG_diagnostics_run(const DLG_State* state) {
    (void)state;
    /* TODO: DLG diagnostic checks for Onboard Data Logging */
    DLG_g_fault = false;
}

bool DLG_diagnostics_has_fault(void) {
    return DLG_g_fault;
}

void DLG_diagnostics_clear(void) {
    DLG_g_fault = false;
}
