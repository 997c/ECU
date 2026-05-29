#include "MDMdiagnostics.h"
#include <string.h>

static bool MDM_g_fault = false;

void MDM_diagnostics_init(void) {
    MDM_g_fault = false;
}

void MDM_diagnostics_run(const MDM_State* state) {
    (void)state;
    /* TODO: MDM diagnostic checks for Mid-Corner Diff Map */
    MDM_g_fault = false;
}

bool MDM_diagnostics_has_fault(void) {
    return MDM_g_fault;
}

void MDM_diagnostics_clear(void) {
    MDM_g_fault = false;
}
