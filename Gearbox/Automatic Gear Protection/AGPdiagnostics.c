#include "AGPdiagnostics.h"
#include <string.h>

static bool AGP_g_fault = false;

void AGP_diagnostics_init(void) {
    AGP_g_fault = false;
}

void AGP_diagnostics_run(const AGP_State* state) {
    (void)state;
    /* TODO: AGP diagnostic checks for Automatic Gear Protection */
    AGP_g_fault = false;
}

bool AGP_diagnostics_has_fault(void) {
    return AGP_g_fault;
}

void AGP_diagnostics_clear(void) {
    AGP_g_fault = false;
}
