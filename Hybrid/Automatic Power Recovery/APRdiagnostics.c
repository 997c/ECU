#include "APRdiagnostics.h"
#include <string.h>

static bool APR_g_fault = false;

void APR_diagnostics_init(void) {
    APR_g_fault = false;
}

void APR_diagnostics_run(const APR_State* state) {
    (void)state;
    /* TODO: APR diagnostic checks for Automatic Power Recovery */
    APR_g_fault = false;
}

bool APR_diagnostics_has_fault(void) {
    return APR_g_fault;
}

void APR_diagnostics_clear(void) {
    APR_g_fault = false;
}
