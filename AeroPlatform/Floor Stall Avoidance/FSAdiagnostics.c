#include "FSAdiagnostics.h"
#include <string.h>

static bool FSA_g_fault = false;

void FSA_diagnostics_init(void) {
    FSA_g_fault = false;
}

void FSA_diagnostics_run(const FSA_State* state) {
    (void)state;
    /* TODO: FSA diagnostic checks for Floor Stall Avoidance */
    FSA_g_fault = false;
}

bool FSA_diagnostics_has_fault(void) {
    return FSA_g_fault;
}

void FSA_diagnostics_clear(void) {
    FSA_g_fault = false;
}
