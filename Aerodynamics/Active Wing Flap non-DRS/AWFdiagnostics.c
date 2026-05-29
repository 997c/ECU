#include "AWFdiagnostics.h"
#include <string.h>

static bool AWF_g_fault = false;

void AWF_diagnostics_init(void) {
    AWF_g_fault = false;
}

void AWF_diagnostics_run(const AWF_State* state) {
    (void)state;
    /* TODO: AWF diagnostic checks for Active Wing Flap non-DRS */
    AWF_g_fault = false;
}

bool AWF_diagnostics_has_fault(void) {
    return AWF_g_fault;
}

void AWF_diagnostics_clear(void) {
    AWF_g_fault = false;
}
