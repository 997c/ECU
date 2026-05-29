#include "LSCdiagnostics.h"
#include <string.h>

static bool LSC_g_fault = false;

void LSC_diagnostics_init(void) {
    LSC_g_fault = false;
}

void LSC_diagnostics_run(const LSC_State* state) {
    (void)state;
    /* TODO: LSC diagnostic checks for Limited Slip Control Electronic */
    LSC_g_fault = false;
}

bool LSC_diagnostics_has_fault(void) {
    return LSC_g_fault;
}

void LSC_diagnostics_clear(void) {
    LSC_g_fault = false;
}
