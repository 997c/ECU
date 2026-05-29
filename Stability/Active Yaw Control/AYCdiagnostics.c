#include "AYCdiagnostics.h"
#include <string.h>

static bool AYC_g_fault = false;

void AYC_diagnostics_init(void) {
    AYC_g_fault = false;
}

void AYC_diagnostics_run(const AYC_State* state) {
    (void)state;
    /* TODO: AYC diagnostic checks for Active Yaw Control */
    AYC_g_fault = false;
}

bool AYC_diagnostics_has_fault(void) {
    return AYC_g_fault;
}

void AYC_diagnostics_clear(void) {
    AYC_g_fault = false;
}
