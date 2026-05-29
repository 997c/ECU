#include "APCdiagnostics.h"
#include <string.h>

static bool APC_g_fault = false;

void APC_diagnostics_init(void) {
    APC_g_fault = false;
}

void APC_diagnostics_run(const APC_State* state) {
    (void)state;
    /* TODO: APC diagnostic checks for Pre-Chamber Ignition Control */
    APC_g_fault = false;
}

bool APC_diagnostics_has_fault(void) {
    return APC_g_fault;
}

void APC_diagnostics_clear(void) {
    APC_g_fault = false;
}
