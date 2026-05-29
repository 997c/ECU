#include "OTMdiagnostics.h"
#include <string.h>

static bool OTM_g_fault = false;

void OTM_diagnostics_init(void) {
    OTM_g_fault = false;
}

void OTM_diagnostics_run(const OTM_State* state) {
    (void)state;
    /* TODO: OTM diagnostic checks for Oil Thermal Management */
    OTM_g_fault = false;
}

bool OTM_diagnostics_has_fault(void) {
    return OTM_g_fault;
}

void OTM_diagnostics_clear(void) {
    OTM_g_fault = false;
}
