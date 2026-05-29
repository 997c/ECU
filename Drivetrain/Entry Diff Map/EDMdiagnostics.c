#include "EDMdiagnostics.h"
#include <string.h>

static bool EDM_g_fault = false;

void EDM_diagnostics_init(void) {
    EDM_g_fault = false;
}

void EDM_diagnostics_run(const EDM_State* state) {
    (void)state;
    /* TODO: EDM diagnostic checks for Entry Diff Map */
    EDM_g_fault = false;
}

bool EDM_diagnostics_has_fault(void) {
    return EDM_g_fault;
}

void EDM_diagnostics_clear(void) {
    EDM_g_fault = false;
}
