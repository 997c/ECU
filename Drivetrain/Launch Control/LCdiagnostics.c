#include "LCdiagnostics.h"
#include <string.h>

static bool LC_g_fault = false;

void LC_diagnostics_init(void) {
    LC_g_fault = false;
}

void LC_diagnostics_run(const LC_State* state) {
    (void)state;
    /* TODO: LC diagnostic checks for Launch Control */
    LC_g_fault = false;
}

bool LC_diagnostics_has_fault(void) {
    return LC_g_fault;
}

void LC_diagnostics_clear(void) {
    LC_g_fault = false;
}
