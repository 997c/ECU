#include "ESCdiagnostics.h"
#include <string.h>

static bool ESC_g_fault = false;

void ESC_diagnostics_init(void) {
    ESC_g_fault = false;
}

void ESC_diagnostics_run(const ESC_State* state) {
    (void)state;
    /* TODO: ESC diagnostic checks for Electronic Stability Control */
    ESC_g_fault = false;
}

bool ESC_diagnostics_has_fault(void) {
    return ESC_g_fault;
}

void ESC_diagnostics_clear(void) {
    ESC_g_fault = false;
}
