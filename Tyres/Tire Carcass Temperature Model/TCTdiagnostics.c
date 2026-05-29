#include "TCTdiagnostics.h"
#include <string.h>

static bool TCT_g_fault = false;

void TCT_diagnostics_init(void) {
    TCT_g_fault = false;
}

void TCT_diagnostics_run(const TCT_State* state) {
    (void)state;
    /* TODO: TCT diagnostic checks for Tire Carcass Temperature Model */
    TCT_g_fault = false;
}

bool TCT_diagnostics_has_fault(void) {
    return TCT_g_fault;
}

void TCT_diagnostics_clear(void) {
    TCT_g_fault = false;
}
