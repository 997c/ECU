#include "ABCdiagnostics.h"
#include <string.h>

static bool ABC_g_fault = false;

void ABC_diagnostics_init(void) {
    ABC_g_fault = false;
}

void ABC_diagnostics_run(const ABC_State* state) {
    (void)state;
    /* TODO: ABC diagnostic checks for Active Body Control */
    ABC_g_fault = false;
}

bool ABC_diagnostics_has_fault(void) {
    return ABC_g_fault;
}

void ABC_diagnostics_clear(void) {
    ABC_g_fault = false;
}
