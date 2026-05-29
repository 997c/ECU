#include "DASdiagnostics.h"
#include <string.h>

static bool DAS_g_fault = false;

void DAS_diagnostics_init(void) {
    DAS_g_fault = false;
}

void DAS_diagnostics_run(const DAS_State* state) {
    (void)state;
    /* TODO: DAS diagnostic checks for Dual Axis Steering */
    DAS_g_fault = false;
}

bool DAS_diagnostics_has_fault(void) {
    return DAS_g_fault;
}

void DAS_diagnostics_clear(void) {
    DAS_g_fault = false;
}
