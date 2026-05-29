#include "FRICdiagnostics.h"
#include <string.h>

static bool FRIC_g_fault = false;

void FRIC_diagnostics_init(void) {
    FRIC_g_fault = false;
}

void FRIC_diagnostics_run(const FRIC_State* state) {
    (void)state;
    /* TODO: FRIC diagnostic checks for Front-Rear Interconnected Suspension */
    FRIC_g_fault = false;
}

bool FRIC_diagnostics_has_fault(void) {
    return FRIC_g_fault;
}

void FRIC_diagnostics_clear(void) {
    FRIC_g_fault = false;
}
