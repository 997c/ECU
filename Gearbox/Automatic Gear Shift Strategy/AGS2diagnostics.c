#include "AGS2diagnostics.h"
#include <string.h>

static bool AGS2_g_fault = false;

void AGS2_diagnostics_init(void) {
    AGS2_g_fault = false;
}

void AGS2_diagnostics_run(const AGS2_State* state) {
    (void)state;
    /* TODO: AGS2 diagnostic checks for Automatic Gear Shift Strategy */
    AGS2_g_fault = false;
}

bool AGS2_diagnostics_has_fault(void) {
    return AGS2_g_fault;
}

void AGS2_diagnostics_clear(void) {
    AGS2_g_fault = false;
}
