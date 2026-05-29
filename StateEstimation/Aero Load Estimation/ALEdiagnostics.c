#include "ALEdiagnostics.h"
#include <string.h>

static bool ALE_g_fault = false;

void ALE_diagnostics_init(void) {
    ALE_g_fault = false;
}

void ALE_diagnostics_run(const ALE_State* state) {
    (void)state;
    /* TODO: ALE diagnostic checks for Aero Load Estimation */
    ALE_g_fault = false;
}

bool ALE_diagnostics_has_fault(void) {
    return ALE_g_fault;
}

void ALE_diagnostics_clear(void) {
    ALE_g_fault = false;
}
