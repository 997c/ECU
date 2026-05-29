#include "TFEdiagnostics.h"
#include <string.h>

static bool TFE_g_fault = false;

void TFE_diagnostics_init(void) {
    TFE_g_fault = false;
}

void TFE_diagnostics_run(const TFE_State* state) {
    (void)state;
    /* TODO: TFE diagnostic checks for Tire Friction Estimation */
    TFE_g_fault = false;
}

bool TFE_diagnostics_has_fault(void) {
    return TFE_g_fault;
}

void TFE_diagnostics_clear(void) {
    TFE_g_fault = false;
}
