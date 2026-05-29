#include "HVSdiagnostics.h"
#include <string.h>

static bool HVS_g_fault = false;

void HVS_diagnostics_init(void) {
    HVS_g_fault = false;
}

void HVS_diagnostics_run(const HVS_State* state) {
    (void)state;
    /* TODO: HVS diagnostic checks for Harvest Strategy Control */
    HVS_g_fault = false;
}

bool HVS_diagnostics_has_fault(void) {
    return HVS_g_fault;
}

void HVS_diagnostics_clear(void) {
    HVS_g_fault = false;
}
