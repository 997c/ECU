#include "AFDdiagnostics.h"
#include <string.h>

static bool AFD_g_fault = false;

void AFD_diagnostics_init(void) {
    AFD_g_fault = false;
}

void AFD_diagnostics_run(const AFD_State* state) {
    (void)state;
    /* TODO: AFD diagnostic checks for Active Front Differential */
    AFD_g_fault = false;
}

bool AFD_diagnostics_has_fault(void) {
    return AFD_g_fault;
}

void AFD_diagnostics_clear(void) {
    AFD_g_fault = false;
}
