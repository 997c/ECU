#include "HBAdiagnostics.h"
#include <string.h>

static bool HBA_g_fault = false;

void HBA_diagnostics_init(void) {
    HBA_g_fault = false;
}

void HBA_diagnostics_run(const HBA_State* state) {
    (void)state;
    /* TODO: HBA diagnostic checks for Hydraulic Brake Assist */
    HBA_g_fault = false;
}

bool HBA_diagnostics_has_fault(void) {
    return HBA_g_fault;
}

void HBA_diagnostics_clear(void) {
    HBA_g_fault = false;
}
