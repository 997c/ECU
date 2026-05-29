#include "AFMdiagnostics.h"
#include <string.h>

static bool AFM_g_fault = false;

void AFM_diagnostics_init(void) {
    AFM_g_fault = false;
}

void AFM_diagnostics_run(const AFM_State* state) {
    (void)state;
    /* TODO: AFM diagnostic checks for Active Fuel Map Auto Select */
    AFM_g_fault = false;
}

bool AFM_diagnostics_has_fault(void) {
    return AFM_g_fault;
}

void AFM_diagnostics_clear(void) {
    AFM_g_fault = false;
}
