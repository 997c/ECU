#include "TSTdiagnostics.h"
#include <string.h>

static bool TST_g_fault = false;

void TST_diagnostics_init(void) {
    TST_g_fault = false;
}

void TST_diagnostics_run(const TST_State* state) {
    (void)state;
    /* TODO: TST diagnostic checks for Tire Surface Temperature Model */
    TST_g_fault = false;
}

bool TST_diagnostics_has_fault(void) {
    return TST_g_fault;
}

void TST_diagnostics_clear(void) {
    TST_g_fault = false;
}
