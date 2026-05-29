#include "VDSdiagnostics.h"
#include <string.h>

static bool VDS_g_fault = false;

void VDS_diagnostics_init(void) {
    VDS_g_fault = false;
}

void VDS_diagnostics_run(const VDS_State* state) {
    (void)state;
    /* TODO: VDS diagnostic checks for Variable Downforce System */
    VDS_g_fault = false;
}

bool VDS_diagnostics_has_fault(void) {
    return VDS_g_fault;
}

void VDS_diagnostics_clear(void) {
    VDS_g_fault = false;
}
