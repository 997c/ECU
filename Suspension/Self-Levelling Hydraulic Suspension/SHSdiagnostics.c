#include "SHSdiagnostics.h"
#include <string.h>

static bool SHS_g_fault = false;

void SHS_diagnostics_init(void) {
    SHS_g_fault = false;
}

void SHS_diagnostics_run(const SHS_State* state) {
    (void)state;
    /* TODO: SHS diagnostic checks for Self-Levelling Hydraulic Suspension */
    SHS_g_fault = false;
}

bool SHS_diagnostics_has_fault(void) {
    return SHS_g_fault;
}

void SHS_diagnostics_clear(void) {
    SHS_g_fault = false;
}
