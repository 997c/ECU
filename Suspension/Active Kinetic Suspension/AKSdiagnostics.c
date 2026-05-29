#include "AKSdiagnostics.h"
#include <string.h>

static bool AKS_g_fault = false;

void AKS_diagnostics_init(void) {
    AKS_g_fault = false;
}

void AKS_diagnostics_run(const AKS_State* state) {
    (void)state;
    /* TODO: AKS diagnostic checks for Active Kinetic Suspension */
    AKS_g_fault = false;
}

bool AKS_diagnostics_has_fault(void) {
    return AKS_g_fault;
}

void AKS_diagnostics_clear(void) {
    AKS_g_fault = false;
}
