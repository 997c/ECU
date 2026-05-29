#include "MGKdiagnostics.h"
#include <string.h>

static bool MGK_g_fault = false;

void MGK_diagnostics_init(void) {
    MGK_g_fault = false;
}

void MGK_diagnostics_run(const MGK_State* state) {
    (void)state;
    /* TODO: MGK diagnostic checks for MGU-K Torque Blend Control */
    MGK_g_fault = false;
}

bool MGK_diagnostics_has_fault(void) {
    return MGK_g_fault;
}

void MGK_diagnostics_clear(void) {
    MGK_g_fault = false;
}
