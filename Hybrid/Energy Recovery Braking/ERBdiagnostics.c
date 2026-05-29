#include "ERBdiagnostics.h"
#include <string.h>

static bool ERB_g_fault = false;

void ERB_diagnostics_init(void) {
    ERB_g_fault = false;
}

void ERB_diagnostics_run(const ERB_State* state) {
    (void)state;
    /* TODO: ERB diagnostic checks for Energy Recovery Braking */
    ERB_g_fault = false;
}

bool ERB_diagnostics_has_fault(void) {
    return ERB_g_fault;
}

void ERB_diagnostics_clear(void) {
    ERB_g_fault = false;
}
