#include "RDHdiagnostics.h"
#include <string.h>

static bool RDH_g_fault = false;

void RDH_diagnostics_init(void) {
    RDH_g_fault = false;
}

void RDH_diagnostics_run(const RDH_State* state) {
    (void)state;
    /* TODO: RDH diagnostic checks for Redundancy Handling */
    RDH_g_fault = false;
}

bool RDH_diagnostics_has_fault(void) {
    return RDH_g_fault;
}

void RDH_diagnostics_clear(void) {
    RDH_g_fault = false;
}
