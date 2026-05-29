#include "UTRdiagnostics.h"
#include <string.h>

static bool UTR_g_fault = false;

void UTR_diagnostics_init(void) {
    UTR_g_fault = false;
}

void UTR_diagnostics_run(const UTR_State* state) {
    (void)state;
    /* TODO: UTR diagnostic checks for Upshift Torque Recovery */
    UTR_g_fault = false;
}

bool UTR_diagnostics_has_fault(void) {
    return UTR_g_fault;
}

void UTR_diagnostics_clear(void) {
    UTR_g_fault = false;
}
