#include "USCdiagnostics.h"
#include <string.h>

static bool USC_g_fault = false;

void USC_diagnostics_init(void) {
    USC_g_fault = false;
}

void USC_diagnostics_run(const USC_State* state) {
    (void)state;
    /* TODO: USC diagnostic checks for Understeer Control Auto */
    USC_g_fault = false;
}

bool USC_diagnostics_has_fault(void) {
    return USC_g_fault;
}

void USC_diagnostics_clear(void) {
    USC_g_fault = false;
}
