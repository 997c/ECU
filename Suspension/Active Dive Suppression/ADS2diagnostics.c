#include "ADS2diagnostics.h"
#include <string.h>

static bool ADS2_g_fault = false;

void ADS2_diagnostics_init(void) {
    ADS2_g_fault = false;
}

void ADS2_diagnostics_run(const ADS2_State* state) {
    (void)state;
    /* TODO: ADS2 diagnostic checks for Active Dive Suppression */
    ADS2_g_fault = false;
}

bool ADS2_diagnostics_has_fault(void) {
    return ADS2_g_fault;
}

void ADS2_diagnostics_clear(void) {
    ADS2_g_fault = false;
}
