#include "TDEdiagnostics.h"
#include <string.h>

static bool TDE_g_fault = false;

void TDE_diagnostics_init(void) {
    TDE_g_fault = false;
}

void TDE_diagnostics_run(const TDE_State* state) {
    (void)state;
    /* TODO: TDE diagnostic checks for Tire Degradation Estimate */
    TDE_g_fault = false;
}

bool TDE_diagnostics_has_fault(void) {
    return TDE_g_fault;
}

void TDE_diagnostics_clear(void) {
    TDE_g_fault = false;
}
