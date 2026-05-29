#include "TSEdiagnostics.h"
#include <string.h>

static bool TSE_g_fault = false;

void TSE_diagnostics_init(void) {
    TSE_g_fault = false;
}

void TSE_diagnostics_run(const TSE_State* state) {
    (void)state;
    /* TODO: TSE diagnostic checks for Tire State Estimation */
    TSE_g_fault = false;
}

bool TSE_diagnostics_has_fault(void) {
    return TSE_g_fault;
}

void TSE_diagnostics_clear(void) {
    TSE_g_fault = false;
}
