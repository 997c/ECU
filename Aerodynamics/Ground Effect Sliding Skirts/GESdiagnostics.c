#include "GESdiagnostics.h"
#include <string.h>

static bool GES_g_fault = false;

void GES_diagnostics_init(void) {
    GES_g_fault = false;
}

void GES_diagnostics_run(const GES_State* state) {
    (void)state;
    /* TODO: GES diagnostic checks for Ground Effect Sliding Skirts */
    GES_g_fault = false;
}

bool GES_diagnostics_has_fault(void) {
    return GES_g_fault;
}

void GES_diagnostics_clear(void) {
    GES_g_fault = false;
}
