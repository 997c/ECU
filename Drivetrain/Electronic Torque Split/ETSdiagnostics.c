#include "ETSdiagnostics.h"
#include <string.h>

static bool ETS_g_fault = false;

void ETS_diagnostics_init(void) {
    ETS_g_fault = false;
}

void ETS_diagnostics_run(const ETS_State* state) {
    (void)state;
    /* TODO: ETS diagnostic checks for Electronic Torque Split */
    ETS_g_fault = false;
}

bool ETS_diagnostics_has_fault(void) {
    return ETS_g_fault;
}

void ETS_diagnostics_clear(void) {
    ETS_g_fault = false;
}
