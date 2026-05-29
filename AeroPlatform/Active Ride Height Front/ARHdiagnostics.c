#include "ARHdiagnostics.h"
#include <string.h>

static bool ARH_g_fault = false;

void ARH_diagnostics_init(void) {
    ARH_g_fault = false;
}

void ARH_diagnostics_run(const ARH_State* state) {
    (void)state;
    /* TODO: ARH diagnostic checks for Active Ride Height Front */
    ARH_g_fault = false;
}

bool ARH_diagnostics_has_fault(void) {
    return ARH_g_fault;
}

void ARH_diagnostics_clear(void) {
    ARH_g_fault = false;
}
