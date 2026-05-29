#include "HCRdiagnostics.h"
#include <string.h>

static bool HCR_g_fault = false;

void HCR_diagnostics_init(void) {
    HCR_g_fault = false;
}

void HCR_diagnostics_run(const HCR_State* state) {
    (void)state;
    /* TODO: HCR diagnostic checks for Homogeneous Charge Compression */
    HCR_g_fault = false;
}

bool HCR_diagnostics_has_fault(void) {
    return HCR_g_fault;
}

void HCR_diagnostics_clear(void) {
    HCR_g_fault = false;
}
