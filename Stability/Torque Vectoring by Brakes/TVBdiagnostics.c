#include "TVBdiagnostics.h"
#include <string.h>

static bool TVB_g_fault = false;

void TVB_diagnostics_init(void) {
    TVB_g_fault = false;
}

void TVB_diagnostics_run(const TVB_State* state) {
    (void)state;
    /* TODO: TVB diagnostic checks for Torque Vectoring by Brakes */
    TVB_g_fault = false;
}

bool TVB_diagnostics_has_fault(void) {
    return TVB_g_fault;
}

void TVB_diagnostics_clear(void) {
    TVB_g_fault = false;
}
