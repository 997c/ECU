#include "RLCdiagnostics.h"
#include <string.h>

static bool RLC_g_fault = false;

void RLC_diagnostics_init(void) {
    RLC_g_fault = false;
}

void RLC_diagnostics_run(const RLC_State* state) {
    (void)state;
    /* TODO: RLC diagnostic checks for Roll Control */
    RLC_g_fault = false;
}

bool RLC_diagnostics_has_fault(void) {
    return RLC_g_fault;
}

void RLC_diagnostics_clear(void) {
    RLC_g_fault = false;
}
