#include "ICTdiagnostics.h"
#include <string.h>

static bool ICT_g_fault = false;

void ICT_diagnostics_init(void) {
    ICT_g_fault = false;
}

void ICT_diagnostics_run(const ICT_State* state) {
    (void)state;
    /* TODO: ICT diagnostic checks for Intercooler Charge Air Thermal */
    ICT_g_fault = false;
}

bool ICT_diagnostics_has_fault(void) {
    return ICT_g_fault;
}

void ICT_diagnostics_clear(void) {
    ICT_g_fault = false;
}
