#include "AISdiagnostics.h"
#include <string.h>

static bool AIS_g_fault = false;

void AIS_diagnostics_init(void) {
    AIS_g_fault = false;
}

void AIS_diagnostics_run(const AIS_State* state) {
    (void)state;
    /* TODO: AIS diagnostic checks for Active Interconnected Suspension */
    AIS_g_fault = false;
}

bool AIS_diagnostics_has_fault(void) {
    return AIS_g_fault;
}

void AIS_diagnostics_clear(void) {
    AIS_g_fault = false;
}
