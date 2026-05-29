#include "VIGdiagnostics.h"
#include <string.h>

static bool VIG_g_fault = false;

void VIG_diagnostics_init(void) {
    VIG_g_fault = false;
}

void VIG_diagnostics_run(const VIG_State* state) {
    (void)state;
    /* TODO: VIG diagnostic checks for Variable Intake Geometry */
    VIG_g_fault = false;
}

bool VIG_diagnostics_has_fault(void) {
    return VIG_g_fault;
}

void VIG_diagnostics_clear(void) {
    VIG_g_fault = false;
}
