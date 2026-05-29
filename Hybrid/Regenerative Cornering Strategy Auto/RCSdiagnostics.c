#include "RCSdiagnostics.h"
#include <string.h>

static bool RCS_g_fault = false;

void RCS_diagnostics_init(void) {
    RCS_g_fault = false;
}

void RCS_diagnostics_run(const RCS_State* state) {
    (void)state;
    /* TODO: RCS diagnostic checks for Regenerative Cornering Strategy Auto */
    RCS_g_fault = false;
}

bool RCS_diagnostics_has_fault(void) {
    return RCS_g_fault;
}

void RCS_diagnostics_clear(void) {
    RCS_g_fault = false;
}
