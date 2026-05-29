#include "AKRdiagnostics.h"
#include <string.h>

static bool AKR_g_fault = false;

void AKR_diagnostics_init(void) {
    AKR_g_fault = false;
}

void AKR_diagnostics_run(const AKR_State* state) {
    (void)state;
    /* TODO: AKR diagnostic checks for Auto Kinetic Recovery */
    AKR_g_fault = false;
}

bool AKR_diagnostics_has_fault(void) {
    return AKR_g_fault;
}

void AKR_diagnostics_clear(void) {
    AKR_g_fault = false;
}
