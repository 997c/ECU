#include "ABFdiagnostics.h"
#include <string.h>

static bool ABF_g_fault = false;

void ABF_diagnostics_init(void) {
    ABF_g_fault = false;
}

void ABF_diagnostics_run(const ABF_State* state) {
    (void)state;
    /* TODO: ABF diagnostic checks for Automatic Brake Force Assist */
    ABF_g_fault = false;
}

bool ABF_diagnostics_has_fault(void) {
    return ABF_g_fault;
}

void ABF_diagnostics_clear(void) {
    ABF_g_fault = false;
}
