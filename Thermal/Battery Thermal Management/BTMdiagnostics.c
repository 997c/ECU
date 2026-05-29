#include "BTMdiagnostics.h"
#include <string.h>

static bool BTM_g_fault = false;

void BTM_diagnostics_init(void) {
    BTM_g_fault = false;
}

void BTM_diagnostics_run(const BTM_State* state) {
    (void)state;
    /* TODO: BTM diagnostic checks for Battery Thermal Management */
    BTM_g_fault = false;
}

bool BTM_diagnostics_has_fault(void) {
    return BTM_g_fault;
}

void BTM_diagnostics_clear(void) {
    BTM_g_fault = false;
}
