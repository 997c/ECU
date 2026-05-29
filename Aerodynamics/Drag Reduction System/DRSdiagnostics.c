#include "DRSdiagnostics.h"
#include <string.h>

static bool DRS_g_fault = false;

void DRS_diagnostics_init(void) {
    DRS_g_fault = false;
}

void DRS_diagnostics_run(const DRS_State* state) {
    (void)state;
    /* TODO: DRS diagnostic checks for Drag Reduction System */
    DRS_g_fault = false;
}

bool DRS_diagnostics_has_fault(void) {
    return DRS_g_fault;
}

void DRS_diagnostics_clear(void) {
    DRS_g_fault = false;
}
