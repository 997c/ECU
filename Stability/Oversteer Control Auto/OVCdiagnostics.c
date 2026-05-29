#include "OVCdiagnostics.h"
#include <string.h>

static bool OVC_g_fault = false;

void OVC_diagnostics_init(void) {
    OVC_g_fault = false;
}

void OVC_diagnostics_run(const OVC_State* state) {
    (void)state;
    /* TODO: OVC diagnostic checks for Oversteer Control Auto */
    OVC_g_fault = false;
}

bool OVC_diagnostics_has_fault(void) {
    return OVC_g_fault;
}

void OVC_diagnostics_clear(void) {
    OVC_g_fault = false;
}
