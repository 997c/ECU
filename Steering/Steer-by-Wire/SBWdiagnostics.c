#include "SBWdiagnostics.h"
#include <string.h>

static bool SBW_g_fault = false;

void SBW_diagnostics_init(void) {
    SBW_g_fault = false;
}

void SBW_diagnostics_run(const SBW_State* state) {
    (void)state;
    /* TODO: SBW diagnostic checks for Steer-by-Wire */
    SBW_g_fault = false;
}

bool SBW_diagnostics_has_fault(void) {
    return SBW_g_fault;
}

void SBW_diagnostics_clear(void) {
    SBW_g_fault = false;
}
