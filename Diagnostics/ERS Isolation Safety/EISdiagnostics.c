#include "EISdiagnostics.h"
#include <string.h>

static bool EIS_g_fault = false;

void EIS_diagnostics_init(void) {
    EIS_g_fault = false;
}

void EIS_diagnostics_run(const EIS_State* state) {
    (void)state;
    /* TODO: EIS diagnostic checks for ERS Isolation Safety */
    EIS_g_fault = false;
}

bool EIS_diagnostics_has_fault(void) {
    return EIS_g_fault;
}

void EIS_diagnostics_clear(void) {
    EIS_g_fault = false;
}
