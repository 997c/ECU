#include "SLAdiagnostics.h"
#include <string.h>

static bool SLA_g_fault = false;

void SLA_diagnostics_init(void) {
    SLA_g_fault = false;
}

void SLA_diagnostics_run(const SLA_State* state) {
    (void)state;
    /* TODO: SLA diagnostic checks for Slip Angle Target Control */
    SLA_g_fault = false;
}

bool SLA_diagnostics_has_fault(void) {
    return SLA_g_fault;
}

void SLA_diagnostics_clear(void) {
    SLA_g_fault = false;
}
