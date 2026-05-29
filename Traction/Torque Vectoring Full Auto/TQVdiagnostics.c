#include "TQVdiagnostics.h"
#include <string.h>

static bool TQV_g_fault = false;

void TQV_diagnostics_init(void) {
    TQV_g_fault = false;
}

void TQV_diagnostics_run(const TQV_State* state) {
    (void)state;
    /* TODO: TQV diagnostic checks for Torque Vectoring Full Auto */
    TQV_g_fault = false;
}

bool TQV_diagnostics_has_fault(void) {
    return TQV_g_fault;
}

void TQV_diagnostics_clear(void) {
    TQV_g_fault = false;
}
