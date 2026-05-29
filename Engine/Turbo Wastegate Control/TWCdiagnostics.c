#include "TWCdiagnostics.h"
#include <string.h>

static bool TWC_g_fault = false;

void TWC_diagnostics_init(void) {
    TWC_g_fault = false;
}

void TWC_diagnostics_run(const TWC_State* state) {
    (void)state;
    /* TODO: TWC diagnostic checks for Turbo Wastegate Control */
    TWC_g_fault = false;
}

bool TWC_diagnostics_has_fault(void) {
    return TWC_g_fault;
}

void TWC_diagnostics_clear(void) {
    TWC_g_fault = false;
}
