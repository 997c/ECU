#include "AUSdiagnostics.h"
#include <string.h>

static bool AUS_g_fault = false;

void AUS_diagnostics_init(void) {
    AUS_g_fault = false;
}

void AUS_diagnostics_run(const AUS_State* state) {
    (void)state;
    /* TODO: AUS diagnostic checks for Active Underbody Sealing */
    AUS_g_fault = false;
}

bool AUS_diagnostics_has_fault(void) {
    return AUS_g_fault;
}

void AUS_diagnostics_clear(void) {
    AUS_g_fault = false;
}
