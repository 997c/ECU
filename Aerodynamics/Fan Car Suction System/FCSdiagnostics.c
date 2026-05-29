#include "FCSdiagnostics.h"
#include <string.h>

static bool FCS_g_fault = false;

void FCS_diagnostics_init(void) {
    FCS_g_fault = false;
}

void FCS_diagnostics_run(const FCS_State* state) {
    (void)state;
    /* TODO: FCS diagnostic checks for Fan Car Suction System */
    FCS_g_fault = false;
}

bool FCS_diagnostics_has_fault(void) {
    return FCS_g_fault;
}

void FCS_diagnostics_clear(void) {
    FCS_g_fault = false;
}
