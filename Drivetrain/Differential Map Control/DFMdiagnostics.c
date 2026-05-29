#include "DFMdiagnostics.h"
#include <string.h>

static bool DFM_g_fault = false;

void DFM_diagnostics_init(void) {
    DFM_g_fault = false;
}

void DFM_diagnostics_run(const DFM_State* state) {
    (void)state;
    /* TODO: DFM diagnostic checks for Differential Map Control */
    DFM_g_fault = false;
}

bool DFM_diagnostics_has_fault(void) {
    return DFM_g_fault;
}

void DFM_diagnostics_clear(void) {
    DFM_g_fault = false;
}
