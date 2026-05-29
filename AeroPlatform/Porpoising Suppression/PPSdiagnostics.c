#include "PPSdiagnostics.h"
#include <string.h>

static bool PPS_g_fault = false;

void PPS_diagnostics_init(void) {
    PPS_g_fault = false;
}

void PPS_diagnostics_run(const PPS_State* state) {
    (void)state;
    /* TODO: PPS diagnostic checks for Porpoising Suppression */
    PPS_g_fault = false;
}

bool PPS_diagnostics_has_fault(void) {
    return PPS_g_fault;
}

void PPS_diagnostics_clear(void) {
    PPS_g_fault = false;
}
