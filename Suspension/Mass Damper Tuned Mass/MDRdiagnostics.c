#include "MDRdiagnostics.h"
#include <string.h>

static bool MDR_g_fault = false;

void MDR_diagnostics_init(void) {
    MDR_g_fault = false;
}

void MDR_diagnostics_run(const MDR_State* state) {
    (void)state;
    /* TODO: MDR diagnostic checks for Mass Damper Tuned Mass */
    MDR_g_fault = false;
}

bool MDR_diagnostics_has_fault(void) {
    return MDR_g_fault;
}

void MDR_diagnostics_clear(void) {
    MDR_g_fault = false;
}
