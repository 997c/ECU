#include "TGEdiagnostics.h"
#include <string.h>

static bool TGE_g_fault = false;

void TGE_diagnostics_init(void) {
    TGE_g_fault = false;
}

void TGE_diagnostics_run(const TGE_State* state) {
    (void)state;
    /* TODO: TGE diagnostic checks for Tire Grip Coefficient Estimate */
    TGE_g_fault = false;
}

bool TGE_diagnostics_has_fault(void) {
    return TGE_g_fault;
}

void TGE_diagnostics_clear(void) {
    TGE_g_fault = false;
}
