#include "OGSdiagnostics.h"
#include <string.h>

static bool OGS_g_fault = false;

void OGS_diagnostics_init(void) {
    OGS_g_fault = false;
}

void OGS_diagnostics_run(const OGS_State* state) {
    (void)state;
    /* TODO: OGS diagnostic checks for Optimal Gear Selection Auto */
    OGS_g_fault = false;
}

bool OGS_diagnostics_has_fault(void) {
    return OGS_g_fault;
}

void OGS_diagnostics_clear(void) {
    OGS_g_fault = false;
}
