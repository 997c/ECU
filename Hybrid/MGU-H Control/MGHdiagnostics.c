#include "MGHdiagnostics.h"
#include <string.h>

static bool MGH_g_fault = false;

void MGH_diagnostics_init(void) {
    MGH_g_fault = false;
}

void MGH_diagnostics_run(const MGH_State* state) {
    (void)state;
    /* TODO: MGH diagnostic checks for MGU-H Control */
    MGH_g_fault = false;
}

bool MGH_diagnostics_has_fault(void) {
    return MGH_g_fault;
}

void MGH_diagnostics_clear(void) {
    MGH_g_fault = false;
}
