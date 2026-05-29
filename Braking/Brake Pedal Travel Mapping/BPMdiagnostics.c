#include "BPMdiagnostics.h"
#include <string.h>

static bool BPM_g_fault = false;

void BPM_diagnostics_init(void) {
    BPM_g_fault = false;
}

void BPM_diagnostics_run(const BPM_State* state) {
    (void)state;
    /* TODO: BPM diagnostic checks for Brake Pedal Travel Mapping */
    BPM_g_fault = false;
}

bool BPM_diagnostics_has_fault(void) {
    return BPM_g_fault;
}

void BPM_diagnostics_clear(void) {
    BPM_g_fault = false;
}
