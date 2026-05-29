#include "TPMdiagnostics.h"
#include <string.h>

static bool TPM_g_fault = false;

void TPM_diagnostics_init(void) {
    TPM_g_fault = false;
}

void TPM_diagnostics_run(const TPM_State* state) {
    (void)state;
    /* TODO: TPM diagnostic checks for Tyre Pressure Monitoring */
    TPM_g_fault = false;
}

bool TPM_diagnostics_has_fault(void) {
    return TPM_g_fault;
}

void TPM_diagnostics_clear(void) {
    TPM_g_fault = false;
}
