#include "EBDdiagnostics.h"
#include <string.h>

static bool EBD_g_fault = false;

void EBD_diagnostics_init(void) {
    EBD_g_fault = false;
}

void EBD_diagnostics_run(const EBD_State* state) {
    (void)state;
    /* TODO: EBD diagnostic checks for Electronic Brakeforce Distribution */
    EBD_g_fault = false;
}

bool EBD_diagnostics_has_fault(void) {
    return EBD_g_fault;
}

void EBD_diagnostics_clear(void) {
    EBD_g_fault = false;
}
