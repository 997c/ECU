#include "EDLdiagnostics.h"
#include <string.h>

static bool EDL_g_fault = false;

void EDL_diagnostics_init(void) {
    EDL_g_fault = false;
}

void EDL_diagnostics_run(const EDL_State* state) {
    (void)state;
    /* TODO: EDL diagnostic checks for Electronic Differential Lock */
    EDL_g_fault = false;
}

bool EDL_diagnostics_has_fault(void) {
    return EDL_g_fault;
}

void EDL_diagnostics_clear(void) {
    EDL_g_fault = false;
}
