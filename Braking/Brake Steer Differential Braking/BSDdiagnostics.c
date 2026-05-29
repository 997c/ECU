#include "BSDdiagnostics.h"
#include <string.h>

static bool BSD_g_fault = false;

void BSD_diagnostics_init(void) {
    BSD_g_fault = false;
}

void BSD_diagnostics_run(const BSD_State* state) {
    (void)state;
    /* TODO: BSD diagnostic checks for Brake Steer Differential Braking */
    BSD_g_fault = false;
}

bool BSD_diagnostics_has_fault(void) {
    return BSD_g_fault;
}

void BSD_diagnostics_clear(void) {
    BSD_g_fault = false;
}
