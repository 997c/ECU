#include "EBD2diagnostics.h"
#include <string.h>

static bool EBD2_g_fault = false;

void EBD2_diagnostics_init(void) {
    EBD2_g_fault = false;
}

void EBD2_diagnostics_run(const EBD2_State* state) {
    (void)state;
    /* TODO: EBD2 diagnostic checks for Exhaust Blown Diffuser */
    EBD2_g_fault = false;
}

bool EBD2_diagnostics_has_fault(void) {
    return EBD2_g_fault;
}

void EBD2_diagnostics_clear(void) {
    EBD2_g_fault = false;
}
