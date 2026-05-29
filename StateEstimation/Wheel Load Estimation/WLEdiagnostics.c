#include "WLEdiagnostics.h"
#include <string.h>

static bool WLE_g_fault = false;

void WLE_diagnostics_init(void) {
    WLE_g_fault = false;
}

void WLE_diagnostics_run(const WLE_State* state) {
    (void)state;
    /* TODO: WLE diagnostic checks for Wheel Load Estimation */
    WLE_g_fault = false;
}

bool WLE_diagnostics_has_fault(void) {
    return WLE_g_fault;
}

void WLE_diagnostics_clear(void) {
    WLE_g_fault = false;
}
