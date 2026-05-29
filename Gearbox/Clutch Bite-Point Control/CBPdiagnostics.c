#include "CBPdiagnostics.h"
#include <string.h>

static bool CBP_g_fault = false;

void CBP_diagnostics_init(void) {
    CBP_g_fault = false;
}

void CBP_diagnostics_run(const CBP_State* state) {
    (void)state;
    /* TODO: CBP diagnostic checks for Clutch Bite-Point Control */
    CBP_g_fault = false;
}

bool CBP_diagnostics_has_fault(void) {
    return CBP_g_fault;
}

void CBP_diagnostics_clear(void) {
    CBP_g_fault = false;
}
