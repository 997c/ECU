#include "AIMdiagnostics.h"
#include <string.h>

static bool AIM_g_fault = false;

void AIM_diagnostics_init(void) {
    AIM_g_fault = false;
}

void AIM_diagnostics_run(const AIM_State* state) {
    (void)state;
    /* TODO: AIM diagnostic checks for Active Intake Manifold */
    AIM_g_fault = false;
}

bool AIM_diagnostics_has_fault(void) {
    return AIM_g_fault;
}

void AIM_diagnostics_clear(void) {
    AIM_g_fault = false;
}
