#include "AHBdiagnostics.h"
#include <string.h>

static bool AHB_g_fault = false;

void AHB_diagnostics_init(void) {
    AHB_g_fault = false;
}

void AHB_diagnostics_run(const AHB_State* state) {
    (void)state;
    /* TODO: AHB diagnostic checks for Automatic Hybrid Boost Driver Aid */
    AHB_g_fault = false;
}

bool AHB_diagnostics_has_fault(void) {
    return AHB_g_fault;
}

void AHB_diagnostics_clear(void) {
    AHB_g_fault = false;
}
