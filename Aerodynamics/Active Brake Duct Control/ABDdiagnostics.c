#include "ABDdiagnostics.h"
#include <string.h>

static bool ABD_g_fault = false;

void ABD_diagnostics_init(void) {
    ABD_g_fault = false;
}

void ABD_diagnostics_run(const ABD_State* state) {
    (void)state;
    /* TODO: ABD diagnostic checks for Active Brake Duct Control */
    ABD_g_fault = false;
}

bool ABD_diagnostics_has_fault(void) {
    return ABD_g_fault;
}

void ABD_diagnostics_clear(void) {
    ABD_g_fault = false;
}
