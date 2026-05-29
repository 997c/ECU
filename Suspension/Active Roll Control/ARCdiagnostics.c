#include "ARCdiagnostics.h"
#include <string.h>

static bool ARC_g_fault = false;

void ARC_diagnostics_init(void) {
    ARC_g_fault = false;
}

void ARC_diagnostics_run(const ARC_State* state) {
    (void)state;
    /* TODO: ARC diagnostic checks for Active Roll Control */
    ARC_g_fault = false;
}

bool ARC_diagnostics_has_fault(void) {
    return ARC_g_fault;
}

void ARC_diagnostics_clear(void) {
    ARC_g_fault = false;
}
