#include "ABS3diagnostics.h"
#include <string.h>

static bool ABS3_g_fault = false;

void ABS3_diagnostics_init(void) {
    ABS3_g_fault = false;
}

void ABS3_diagnostics_run(const ABS3_State* state) {
    (void)state;
    /* TODO: ABS3 diagnostic checks for Active Bounce Suppression */
    ABS3_g_fault = false;
}

bool ABS3_diagnostics_has_fault(void) {
    return ABS3_g_fault;
}

void ABS3_diagnostics_clear(void) {
    ABS3_g_fault = false;
}
