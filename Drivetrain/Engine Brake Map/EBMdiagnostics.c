#include "EBMdiagnostics.h"
#include <string.h>

static bool EBM_g_fault = false;

void EBM_diagnostics_init(void) {
    EBM_g_fault = false;
}

void EBM_diagnostics_run(const EBM_State* state) {
    (void)state;
    /* TODO: EBM diagnostic checks for Engine Brake Map */
    EBM_g_fault = false;
}

bool EBM_diagnostics_has_fault(void) {
    return EBM_g_fault;
}

void EBM_diagnostics_clear(void) {
    EBM_g_fault = false;
}
