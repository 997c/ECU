#include "ADS4diagnostics.h"
#include <string.h>

static bool ADS4_g_fault = false;

void ADS4_diagnostics_init(void) {
    ADS4_g_fault = false;
}

void ADS4_diagnostics_run(const ADS4_State* state) {
    (void)state;
    /* TODO: ADS4 diagnostic checks for Active Downforce Split FR */
    ADS4_g_fault = false;
}

bool ADS4_diagnostics_has_fault(void) {
    return ADS4_g_fault;
}

void ADS4_diagnostics_clear(void) {
    ADS4_g_fault = false;
}
