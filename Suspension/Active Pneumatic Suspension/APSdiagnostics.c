#include "APSdiagnostics.h"
#include <string.h>

static bool APS_g_fault = false;

void APS_diagnostics_init(void) {
    APS_g_fault = false;
}

void APS_diagnostics_run(const APS_State* state) {
    (void)state;
    /* TODO: APS diagnostic checks for Active Pneumatic Suspension */
    APS_g_fault = false;
}

bool APS_diagnostics_has_fault(void) {
    return APS_g_fault;
}

void APS_diagnostics_clear(void) {
    APS_g_fault = false;
}
