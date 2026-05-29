#include "ECTdiagnostics.h"
#include <string.h>

static bool ECT_g_fault = false;

void ECT_diagnostics_init(void) {
    ECT_g_fault = false;
}

void ECT_diagnostics_run(const ECT_State* state) {
    (void)state;
    /* TODO: ECT diagnostic checks for Engine Coolant Thermal Mgmt */
    ECT_g_fault = false;
}

bool ECT_diagnostics_has_fault(void) {
    return ECT_g_fault;
}

void ECT_diagnostics_clear(void) {
    ECT_g_fault = false;
}
