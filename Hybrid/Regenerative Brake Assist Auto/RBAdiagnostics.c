#include "RBAdiagnostics.h"
#include <string.h>

static bool RBA_g_fault = false;

void RBA_diagnostics_init(void) {
    RBA_g_fault = false;
}

void RBA_diagnostics_run(const RBA_State* state) {
    (void)state;
    /* TODO: RBA diagnostic checks for Regenerative Brake Assist Auto */
    RBA_g_fault = false;
}

bool RBA_diagnostics_has_fault(void) {
    return RBA_g_fault;
}

void RBA_diagnostics_clear(void) {
    RBA_g_fault = false;
}
