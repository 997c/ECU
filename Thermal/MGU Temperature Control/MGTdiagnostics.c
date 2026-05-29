#include "MGTdiagnostics.h"
#include <string.h>

static bool MGT_g_fault = false;

void MGT_diagnostics_init(void) {
    MGT_g_fault = false;
}

void MGT_diagnostics_run(const MGT_State* state) {
    (void)state;
    /* TODO: MGT diagnostic checks for MGU Temperature Control */
    MGT_g_fault = false;
}

bool MGT_diagnostics_has_fault(void) {
    return MGT_g_fault;
}

void MGT_diagnostics_clear(void) {
    MGT_g_fault = false;
}
