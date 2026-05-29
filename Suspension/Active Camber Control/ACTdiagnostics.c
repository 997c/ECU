#include "ACTdiagnostics.h"
#include <string.h>

static bool ACT_g_fault = false;

void ACT_diagnostics_init(void) {
    ACT_g_fault = false;
}

void ACT_diagnostics_run(const ACT_State* state) {
    (void)state;
    /* TODO: ACT diagnostic checks for Active Camber Control */
    ACT_g_fault = false;
}

bool ACT_diagnostics_has_fault(void) {
    return ACT_g_fault;
}

void ACT_diagnostics_clear(void) {
    ACT_g_fault = false;
}
