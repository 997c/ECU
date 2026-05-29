#include "FICdiagnostics.h"
#include <string.h>

static bool FIC_g_fault = false;

void FIC_diagnostics_init(void) {
    FIC_g_fault = false;
}

void FIC_diagnostics_run(const FIC_State* state) {
    (void)state;
    /* TODO: FIC diagnostic checks for Fuel Injection Control */
    FIC_g_fault = false;
}

bool FIC_diagnostics_has_fault(void) {
    return FIC_g_fault;
}

void FIC_diagnostics_clear(void) {
    FIC_g_fault = false;
}
