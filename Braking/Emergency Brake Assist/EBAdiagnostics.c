#include "EBAdiagnostics.h"
#include <string.h>

static bool EBA_g_fault = false;

void EBA_diagnostics_init(void) {
    EBA_g_fault = false;
}

void EBA_diagnostics_run(const EBA_State* state) {
    (void)state;
    /* TODO: EBA diagnostic checks for Emergency Brake Assist */
    EBA_g_fault = false;
}

bool EBA_diagnostics_has_fault(void) {
    return EBA_g_fault;
}

void EBA_diagnostics_clear(void) {
    EBA_g_fault = false;
}
