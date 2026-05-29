#include "VCRdiagnostics.h"
#include <string.h>

static bool VCR_g_fault = false;

void VCR_diagnostics_init(void) {
    VCR_g_fault = false;
}

void VCR_diagnostics_run(const VCR_State* state) {
    (void)state;
    /* TODO: VCR diagnostic checks for Variable Compression Ratio */
    VCR_g_fault = false;
}

bool VCR_diagnostics_has_fault(void) {
    return VCR_g_fault;
}

void VCR_diagnostics_clear(void) {
    VCR_g_fault = false;
}
