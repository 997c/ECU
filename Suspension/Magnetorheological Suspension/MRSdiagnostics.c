#include "MRSdiagnostics.h"
#include <string.h>

static bool MRS_g_fault = false;

void MRS_diagnostics_init(void) {
    MRS_g_fault = false;
}

void MRS_diagnostics_run(const MRS_State* state) {
    (void)state;
    /* TODO: MRS diagnostic checks for Magnetorheological Suspension */
    MRS_g_fault = false;
}

bool MRS_diagnostics_has_fault(void) {
    return MRS_g_fault;
}

void MRS_diagnostics_clear(void) {
    MRS_g_fault = false;
}
