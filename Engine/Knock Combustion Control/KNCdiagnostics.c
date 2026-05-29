#include "KNCdiagnostics.h"
#include <string.h>

static bool KNC_g_fault = false;

void KNC_diagnostics_init(void) {
    KNC_g_fault = false;
}

void KNC_diagnostics_run(const KNC_State* state) {
    (void)state;
    /* TODO: KNC diagnostic checks for Knock Combustion Control */
    KNC_g_fault = false;
}

bool KNC_diagnostics_has_fault(void) {
    return KNC_g_fault;
}

void KNC_diagnostics_clear(void) {
    KNC_g_fault = false;
}
