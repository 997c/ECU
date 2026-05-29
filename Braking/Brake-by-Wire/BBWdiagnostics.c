#include "BBWdiagnostics.h"
#include <string.h>

static bool BBW_g_fault = false;

void BBW_diagnostics_init(void) {
    BBW_g_fault = false;
}

void BBW_diagnostics_run(const BBW_State* state) {
    (void)state;
    /* TODO: BBW diagnostic checks for Brake-by-Wire */
    BBW_g_fault = false;
}

bool BBW_diagnostics_has_fault(void) {
    return BBW_g_fault;
}

void BBW_diagnostics_clear(void) {
    BBW_g_fault = false;
}
