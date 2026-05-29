#include "LEOdiagnostics.h"
#include <string.h>

static bool LEO_g_fault = false;

void LEO_diagnostics_init(void) {
    LEO_g_fault = false;
}

void LEO_diagnostics_run(const LEO_State* state) {
    (void)state;
    /* TODO: LEO diagnostic checks for Lap Energy Optimization */
    LEO_g_fault = false;
}

bool LEO_diagnostics_has_fault(void) {
    return LEO_g_fault;
}

void LEO_diagnostics_clear(void) {
    LEO_g_fault = false;
}
