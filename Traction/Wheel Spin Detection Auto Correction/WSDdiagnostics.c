#include "WSDdiagnostics.h"
#include <string.h>

static bool WSD_g_fault = false;

void WSD_diagnostics_init(void) {
    WSD_g_fault = false;
}

void WSD_diagnostics_run(const WSD_State* state) {
    (void)state;
    /* TODO: WSD diagnostic checks for Wheel Spin Detection Auto Correction */
    WSD_g_fault = false;
}

bool WSD_diagnostics_has_fault(void) {
    return WSD_g_fault;
}

void WSD_diagnostics_clear(void) {
    WSD_g_fault = false;
}
