#include "TYTdiagnostics.h"
#include <string.h>

static bool TYT_g_fault = false;

void TYT_diagnostics_init(void) {
    TYT_g_fault = false;
}

void TYT_diagnostics_run(const TYT_State* state) {
    (void)state;
    /* TODO: TYT diagnostic checks for Tyre Temperature Management */
    TYT_g_fault = false;
}

bool TYT_diagnostics_has_fault(void) {
    return TYT_g_fault;
}

void TYT_diagnostics_clear(void) {
    TYT_g_fault = false;
}
