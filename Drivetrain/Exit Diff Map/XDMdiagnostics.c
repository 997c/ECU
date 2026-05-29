#include "XDMdiagnostics.h"
#include <string.h>

static bool XDM_g_fault = false;

void XDM_diagnostics_init(void) {
    XDM_g_fault = false;
}

void XDM_diagnostics_run(const XDM_State* state) {
    (void)state;
    /* TODO: XDM diagnostic checks for Exit Diff Map */
    XDM_g_fault = false;
}

bool XDM_diagnostics_has_fault(void) {
    return XDM_g_fault;
}

void XDM_diagnostics_clear(void) {
    XDM_g_fault = false;
}
