#include "CSAdiagnostics.h"
#include <string.h>

static bool CSA_g_fault = false;

void CSA_diagnostics_init(void) {
    CSA_g_fault = false;
}

void CSA_diagnostics_run(const CSA_State* state) {
    (void)state;
    /* TODO: CSA diagnostic checks for Compressor Surge Avoidance */
    CSA_g_fault = false;
}

bool CSA_diagnostics_has_fault(void) {
    return CSA_g_fault;
}

void CSA_diagnostics_clear(void) {
    CSA_g_fault = false;
}
