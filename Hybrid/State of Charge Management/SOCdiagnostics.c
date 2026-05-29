#include "SOCdiagnostics.h"
#include <string.h>

static bool SOC_g_fault = false;

void SOC_diagnostics_init(void) {
    SOC_g_fault = false;
}

void SOC_diagnostics_run(const SOC_State* state) {
    (void)state;
    /* TODO: SOC diagnostic checks for State of Charge Management */
    SOC_g_fault = false;
}

bool SOC_diagnostics_has_fault(void) {
    return SOC_g_fault;
}

void SOC_diagnostics_clear(void) {
    SOC_g_fault = false;
}
