#include "ABPdiagnostics.h"
#include <string.h>

static bool ABP_g_fault = false;

void ABP_diagnostics_init(void) {
    ABP_g_fault = false;
}

void ABP_diagnostics_run(const ABP_State* state) {
    (void)state;
    /* TODO: ABP diagnostic checks for Automatic Brake Pressure Modulation */
    ABP_g_fault = false;
}

bool ABP_diagnostics_has_fault(void) {
    return ABP_g_fault;
}

void ABP_diagnostics_clear(void) {
    ABP_g_fault = false;
}
