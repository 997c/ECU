#include "HISdiagnostics.h"
#include <string.h>

static bool HIS_g_fault = false;

void HIS_diagnostics_init(void) {
    HIS_g_fault = false;
}

void HIS_diagnostics_run(const HIS_State* state) {
    (void)state;
    /* TODO: HIS diagnostic checks for Hydraulic Interconnected Suspension */
    HIS_g_fault = false;
}

bool HIS_diagnostics_has_fault(void) {
    return HIS_g_fault;
}

void HIS_diagnostics_clear(void) {
    HIS_g_fault = false;
}
