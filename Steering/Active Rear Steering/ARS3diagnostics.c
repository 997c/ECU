#include "ARS3diagnostics.h"
#include <string.h>

static bool ARS3_g_fault = false;

void ARS3_diagnostics_init(void) {
    ARS3_g_fault = false;
}

void ARS3_diagnostics_run(const ARS3_State* state) {
    (void)state;
    /* TODO: ARS3 diagnostic checks for Active Rear Steering */
    ARS3_g_fault = false;
}

bool ARS3_diagnostics_has_fault(void) {
    return ARS3_g_fault;
}

void ARS3_diagnostics_clear(void) {
    ARS3_g_fault = false;
}
