#include "ABRdiagnostics.h"
#include <string.h>

static bool ABR_g_fault = false;

void ABR_diagnostics_init(void) {
    ABR_g_fault = false;
}

void ABR_diagnostics_run(const ABR_State* state) {
    (void)state;
    /* TODO: ABR diagnostic checks for Automatic Brake Regen Blend */
    ABR_g_fault = false;
}

bool ABR_diagnostics_has_fault(void) {
    return ABR_g_fault;
}

void ABR_diagnostics_clear(void) {
    ABR_g_fault = false;
}
