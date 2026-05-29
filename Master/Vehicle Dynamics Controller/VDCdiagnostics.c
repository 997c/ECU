#include "VDCdiagnostics.h"
#include <string.h>

static bool VDC_g_fault = false;

void VDC_diagnostics_init(void) {
    VDC_g_fault = false;
}

void VDC_diagnostics_run(const VDC_State* state) {
    (void)state;
    /* TODO: VDC diagnostic checks for Vehicle Dynamics Controller */
    VDC_g_fault = false;
}

bool VDC_diagnostics_has_fault(void) {
    return VDC_g_fault;
}

void VDC_diagnostics_clear(void) {
    VDC_g_fault = false;
}
