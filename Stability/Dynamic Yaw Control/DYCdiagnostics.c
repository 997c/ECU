#include "DYCdiagnostics.h"
#include <string.h>

static bool DYC_g_fault = false;

void DYC_diagnostics_init(void) {
    DYC_g_fault = false;
}

void DYC_diagnostics_run(const DYC_State* state) {
    (void)state;
    /* TODO: DYC diagnostic checks for Dynamic Yaw Control */
    DYC_g_fault = false;
}

bool DYC_diagnostics_has_fault(void) {
    return DYC_g_fault;
}

void DYC_diagnostics_clear(void) {
    DYC_g_fault = false;
}
