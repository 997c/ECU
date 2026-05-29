#include "ADSdiagnostics.h"
#include <string.h>

static bool ADS_g_fault = false;

void ADS_diagnostics_init(void) {
    ADS_g_fault = false;
}

void ADS_diagnostics_run(const ADS_State* state) {
    (void)state;
    /* TODO: ADS diagnostic checks for Adaptive Damping System */
    ADS_g_fault = false;
}

bool ADS_diagnostics_has_fault(void) {
    return ADS_g_fault;
}

void ADS_diagnostics_clear(void) {
    ADS_g_fault = false;
}
