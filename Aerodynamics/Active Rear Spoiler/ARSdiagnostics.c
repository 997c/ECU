#include "ARSdiagnostics.h"
#include <string.h>

static bool ARS_g_fault = false;

void ARS_diagnostics_init(void) {
    ARS_g_fault = false;
}

void ARS_diagnostics_run(const ARS_State* state) {
    (void)state;
    /* TODO: ARS diagnostic checks for Active Rear Spoiler */
    ARS_g_fault = false;
}

bool ARS_diagnostics_has_fault(void) {
    return ARS_g_fault;
}

void ARS_diagnostics_clear(void) {
    ARS_g_fault = false;
}
