#include "DTCdiagnostics.h"
#include <string.h>

static bool DTC_g_fault = false;

void DTC_diagnostics_init(void) {
    DTC_g_fault = false;
}

void DTC_diagnostics_run(const DTC_State* state) {
    (void)state;
    /* TODO: DTC diagnostic checks for Drivetrain Torque Control Auto */
    DTC_g_fault = false;
}

bool DTC_diagnostics_has_fault(void) {
    return DTC_g_fault;
}

void DTC_diagnostics_clear(void) {
    DTC_g_fault = false;
}
