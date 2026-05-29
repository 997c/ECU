#include "ITCdiagnostics.h"
#include <string.h>

static bool ITC_g_fault = false;

void ITC_diagnostics_init(void) {
    ITC_g_fault = false;
}

void ITC_diagnostics_run(const ITC_State* state) {
    (void)state;
    /* TODO: ITC diagnostic checks for Ignition Timing Control */
    ITC_g_fault = false;
}

bool ITC_diagnostics_has_fault(void) {
    return ITC_g_fault;
}

void ITC_diagnostics_clear(void) {
    ITC_g_fault = false;
}
