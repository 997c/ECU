#include "AGSdiagnostics.h"
#include <string.h>

static bool AGS_g_fault = false;

void AGS_diagnostics_init(void) {
    AGS_g_fault = false;
}

void AGS_diagnostics_run(const AGS_State* state) {
    (void)state;
    /* TODO: AGS diagnostic checks for Automatic Gear Selection */
    AGS_g_fault = false;
}

bool AGS_diagnostics_has_fault(void) {
    return AGS_g_fault;
}

void AGS_diagnostics_clear(void) {
    AGS_g_fault = false;
}
