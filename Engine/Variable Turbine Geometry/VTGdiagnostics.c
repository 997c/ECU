#include "VTGdiagnostics.h"
#include <string.h>

static bool VTG_g_fault = false;

void VTG_diagnostics_init(void) {
    VTG_g_fault = false;
}

void VTG_diagnostics_run(const VTG_State* state) {
    (void)state;
    /* TODO: VTG diagnostic checks for Variable Turbine Geometry */
    VTG_g_fault = false;
}

bool VTG_diagnostics_has_fault(void) {
    return VTG_g_fault;
}

void VTG_diagnostics_clear(void) {
    VTG_g_fault = false;
}
