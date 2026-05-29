#include "ARMdiagnostics.h"
#include <string.h>

static bool ARM_g_fault = false;

void ARM_diagnostics_init(void) {
    ARM_g_fault = false;
}

void ARM_diagnostics_run(const ARM_State* state) {
    (void)state;
    /* TODO: ARM diagnostic checks for Automatic Rev-Matching */
    ARM_g_fault = false;
}

bool ARM_diagnostics_has_fault(void) {
    return ARM_g_fault;
}

void ARM_diagnostics_clear(void) {
    ARM_g_fault = false;
}
