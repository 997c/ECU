#include "ATCdiagnostics.h"
#include <string.h>

static bool ATC_g_fault = false;

void ATC_diagnostics_init(void) {
    ATC_g_fault = false;
}

void ATC_diagnostics_run(const ATC_State* state) {
    (void)state;
    /* TODO: ATC diagnostic checks for Active Toe Control */
    ATC_g_fault = false;
}

bool ATC_diagnostics_has_fault(void) {
    return ATC_g_fault;
}

void ATC_diagnostics_clear(void) {
    ATC_g_fault = false;
}
