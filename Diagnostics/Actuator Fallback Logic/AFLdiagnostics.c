#include "AFLdiagnostics.h"
#include <string.h>

static bool AFL_g_fault = false;

void AFL_diagnostics_init(void) {
    AFL_g_fault = false;
}

void AFL_diagnostics_run(const AFL_State* state) {
    (void)state;
    /* TODO: AFL diagnostic checks for Actuator Fallback Logic */
    AFL_g_fault = false;
}

bool AFL_diagnostics_has_fault(void) {
    return AFL_g_fault;
}

void AFL_diagnostics_clear(void) {
    AFL_g_fault = false;
}
