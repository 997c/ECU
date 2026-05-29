#include "DBCdiagnostics.h"
#include <string.h>

static bool DBC_g_fault = false;

void DBC_diagnostics_init(void) {
    DBC_g_fault = false;
}

void DBC_diagnostics_run(const DBC_State* state) {
    (void)state;
    /* TODO: DBC diagnostic checks for Dynamic Brake Control */
    DBC_g_fault = false;
}

bool DBC_diagnostics_has_fault(void) {
    return DBC_g_fault;
}

void DBC_diagnostics_clear(void) {
    DBC_g_fault = false;
}
