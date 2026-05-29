#include "ADGdiagnostics.h"
#include <string.h>

static bool ADG_g_fault = false;

void ADG_diagnostics_init(void) {
    ADG_g_fault = false;
}

void ADG_diagnostics_run(const ADG_State* state) {
    (void)state;
    /* TODO: ADG diagnostic checks for Active Diffuser Geometry */
    ADG_g_fault = false;
}

bool ADG_diagnostics_has_fault(void) {
    return ADG_g_fault;
}

void ADG_diagnostics_clear(void) {
    ADG_g_fault = false;
}
