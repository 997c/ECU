#include "HVCdiagnostics.h"
#include <string.h>

static bool HVC_g_fault = false;

void HVC_diagnostics_init(void) {
    HVC_g_fault = false;
}

void HVC_diagnostics_run(const HVC_State* state) {
    (void)state;
    /* TODO: HVC diagnostic checks for Heave Control */
    HVC_g_fault = false;
}

bool HVC_diagnostics_has_fault(void) {
    return HVC_g_fault;
}

void HVC_diagnostics_clear(void) {
    HVC_g_fault = false;
}
