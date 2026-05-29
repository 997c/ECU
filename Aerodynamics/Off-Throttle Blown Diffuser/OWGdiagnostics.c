#include "OWGdiagnostics.h"
#include <string.h>

static bool OWG_g_fault = false;

void OWG_diagnostics_init(void) {
    OWG_g_fault = false;
}

void OWG_diagnostics_run(const OWG_State* state) {
    (void)state;
    /* TODO: OWG diagnostic checks for Off-Throttle Blown Diffuser */
    OWG_g_fault = false;
}

bool OWG_diagnostics_has_fault(void) {
    return OWG_g_fault;
}

void OWG_diagnostics_clear(void) {
    OWG_g_fault = false;
}
