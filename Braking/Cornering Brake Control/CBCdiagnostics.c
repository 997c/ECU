#include "CBCdiagnostics.h"
#include <string.h>

static bool CBC_g_fault = false;

void CBC_diagnostics_init(void) {
    CBC_g_fault = false;
}

void CBC_diagnostics_run(const CBC_State* state) {
    (void)state;
    /* TODO: CBC diagnostic checks for Cornering Brake Control */
    CBC_g_fault = false;
}

bool CBC_diagnostics_has_fault(void) {
    return CBC_g_fault;
}

void CBC_diagnostics_clear(void) {
    CBC_g_fault = false;
}
