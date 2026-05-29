#include "AFTdiagnostics.h"
#include <string.h>

static bool AFT_g_fault = false;

void AFT_diagnostics_init(void) {
    AFT_g_fault = false;
}

void AFT_diagnostics_run(const AFT_State* state) {
    (void)state;
    /* TODO: AFT diagnostic checks for Active Floor Throat Control */
    AFT_g_fault = false;
}

bool AFT_diagnostics_has_fault(void) {
    return AFT_g_fault;
}

void AFT_diagnostics_clear(void) {
    AFT_g_fault = false;
}
