#include "ARDdiagnostics.h"
#include <string.h>

static bool ARD_g_fault = false;

void ARD_diagnostics_init(void) {
    ARD_g_fault = false;
}

void ARD_diagnostics_run(const ARD_State* state) {
    (void)state;
    /* TODO: ARD diagnostic checks for Active Rear Differential Full Auto */
    ARD_g_fault = false;
}

bool ARD_diagnostics_has_fault(void) {
    return ARD_g_fault;
}

void ARD_diagnostics_clear(void) {
    ARD_g_fault = false;
}
