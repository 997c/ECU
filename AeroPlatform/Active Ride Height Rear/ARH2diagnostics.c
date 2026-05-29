#include "ARH2diagnostics.h"
#include <string.h>

static bool ARH2_g_fault = false;

void ARH2_diagnostics_init(void) {
    ARH2_g_fault = false;
}

void ARH2_diagnostics_run(const ARH2_State* state) {
    (void)state;
    /* TODO: ARH2 diagnostic checks for Active Ride Height Rear */
    ARH2_g_fault = false;
}

bool ARH2_diagnostics_has_fault(void) {
    return ARH2_g_fault;
}

void ARH2_diagnostics_clear(void) {
    ARH2_g_fault = false;
}
