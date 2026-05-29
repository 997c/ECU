#include "DSPdiagnostics.h"
#include <string.h>

static bool DSP_g_fault = false;

void DSP_diagnostics_init(void) {
    DSP_g_fault = false;
}

void DSP_diagnostics_run(const DSP_State* state) {
    (void)state;
    /* TODO: DSP diagnostic checks for Downshift Protection */
    DSP_g_fault = false;
}

bool DSP_diagnostics_has_fault(void) {
    return DSP_g_fault;
}

void DSP_diagnostics_clear(void) {
    DSP_g_fault = false;
}
