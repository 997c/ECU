#include "EPSdiagnostics.h"
#include <string.h>

static bool EPS_g_fault = false;

void EPS_diagnostics_init(void) {
    EPS_g_fault = false;
}

void EPS_diagnostics_run(const EPS_State* state) {
    (void)state;
    /* TODO: EPS diagnostic checks for Electronic Power Steering Auto */
    EPS_g_fault = false;
}

bool EPS_diagnostics_has_fault(void) {
    return EPS_g_fault;
}

void EPS_diagnostics_clear(void) {
    EPS_g_fault = false;
}
