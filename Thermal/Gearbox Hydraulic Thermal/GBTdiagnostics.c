#include "GBTdiagnostics.h"
#include <string.h>

static bool GBT_g_fault = false;

void GBT_diagnostics_init(void) {
    GBT_g_fault = false;
}

void GBT_diagnostics_run(const GBT_State* state) {
    (void)state;
    /* TODO: GBT diagnostic checks for Gearbox Hydraulic Thermal */
    GBT_g_fault = false;
}

bool GBT_diagnostics_has_fault(void) {
    return GBT_g_fault;
}

void GBT_diagnostics_clear(void) {
    GBT_g_fault = false;
}
