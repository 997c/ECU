#include "GASdiagnostics.h"
#include <string.h>

static bool GAS_g_fault = false;

void GAS_diagnostics_init(void) {
    GAS_g_fault = false;
}

void GAS_diagnostics_run(const GAS_State* state) {
    (void)state;
    /* TODO: GAS diagnostic checks for Ground Effect Active Sealing */
    GAS_g_fault = false;
}

bool GAS_diagnostics_has_fault(void) {
    return GAS_g_fault;
}

void GAS_diagnostics_clear(void) {
    GAS_g_fault = false;
}
