#include "BLDdiagnostics.h"
#include <string.h>

static bool BLD_g_fault = false;

void BLD_diagnostics_init(void) {
    BLD_g_fault = false;
}

void BLD_diagnostics_run(const BLD_State* state) {
    (void)state;
    /* TODO: BLD diagnostic checks for Brake-to-Limit Device Pit Lane */
    BLD_g_fault = false;
}

bool BLD_diagnostics_has_fault(void) {
    return BLD_g_fault;
}

void BLD_diagnostics_clear(void) {
    BLD_g_fault = false;
}
