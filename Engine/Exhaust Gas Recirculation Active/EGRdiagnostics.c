#include "EGRdiagnostics.h"
#include <string.h>

static bool EGR_g_fault = false;

void EGR_diagnostics_init(void) {
    EGR_g_fault = false;
}

void EGR_diagnostics_run(const EGR_State* state) {
    (void)state;
    /* TODO: EGR diagnostic checks for Exhaust Gas Recirculation Active */
    EGR_g_fault = false;
}

bool EGR_diagnostics_has_fault(void) {
    return EGR_g_fault;
}

void EGR_diagnostics_clear(void) {
    EGR_g_fault = false;
}
