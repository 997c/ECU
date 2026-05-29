#include "AFS2diagnostics.h"
#include <string.h>

static bool AFS2_g_fault = false;

void AFS2_diagnostics_init(void) {
    AFS2_g_fault = false;
}

void AFS2_diagnostics_run(const AFS2_State* state) {
    (void)state;
    /* TODO: AFS2 diagnostic checks for Active Front Splitter Control */
    AFS2_g_fault = false;
}

bool AFS2_diagnostics_has_fault(void) {
    return AFS2_g_fault;
}

void AFS2_diagnostics_clear(void) {
    AFS2_g_fault = false;
}
