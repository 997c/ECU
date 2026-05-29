#include "AFCdiagnostics.h"
#include <string.h>

static bool AFC_g_fault = false;

void AFC_diagnostics_init(void) {
    AFC_g_fault = false;
}

void AFC_diagnostics_run(const AFC_State* state) {
    (void)state;
    /* TODO: AFC diagnostic checks for Active Floor Clearance Control */
    AFC_g_fault = false;
}

bool AFC_diagnostics_has_fault(void) {
    return AFC_g_fault;
}

void AFC_diagnostics_clear(void) {
    AFC_g_fault = false;
}
