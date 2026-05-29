#include "VVLdiagnostics.h"
#include <string.h>

static bool VVL_g_fault = false;

void VVL_diagnostics_init(void) {
    VVL_g_fault = false;
}

void VVL_diagnostics_run(const VVL_State* state) {
    (void)state;
    /* TODO: VVL diagnostic checks for Variable Valve Lift */
    VVL_g_fault = false;
}

bool VVL_diagnostics_has_fault(void) {
    return VVL_g_fault;
}

void VVL_diagnostics_clear(void) {
    VVL_g_fault = false;
}
