#include "PTCdiagnostics.h"
#include <string.h>

static bool PTC_g_fault = false;

void PTC_diagnostics_init(void) {
    PTC_g_fault = false;
}

void PTC_diagnostics_run(const PTC_State* state) {
    (void)state;
    /* TODO: PTC diagnostic checks for Pitch Control */
    PTC_g_fault = false;
}

bool PTC_diagnostics_has_fault(void) {
    return PTC_g_fault;
}

void PTC_diagnostics_clear(void) {
    PTC_g_fault = false;
}
