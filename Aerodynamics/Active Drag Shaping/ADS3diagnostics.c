#include "ADS3diagnostics.h"
#include <string.h>

static bool ADS3_g_fault = false;

void ADS3_diagnostics_init(void) {
    ADS3_g_fault = false;
}

void ADS3_diagnostics_run(const ADS3_State* state) {
    (void)state;
    /* TODO: ADS3 diagnostic checks for Active Drag Shaping */
    ADS3_g_fault = false;
}

bool ADS3_diagnostics_has_fault(void) {
    return ADS3_g_fault;
}

void ADS3_diagnostics_clear(void) {
    ADS3_g_fault = false;
}
