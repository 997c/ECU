#include "TCSdiagnostics.h"
#include <string.h>

static bool TCS_g_fault = false;

void TCS_diagnostics_init(void) {
    TCS_g_fault = false;
}

void TCS_diagnostics_run(const TCS_State* state) {
    (void)state;
    /* TODO: TCS diagnostic checks for Traction Control System */
    TCS_g_fault = false;
}

bool TCS_diagnostics_has_fault(void) {
    return TCS_g_fault;
}

void TCS_diagnostics_clear(void) {
    TCS_g_fault = false;
}
