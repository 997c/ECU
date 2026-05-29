#include "AFSdiagnostics.h"
#include <string.h>

static bool AFS_g_fault = false;

void AFS_diagnostics_init(void) {
    AFS_g_fault = false;
}

void AFS_diagnostics_run(const AFS_State* state) {
    (void)state;
    /* TODO: AFS diagnostic checks for Active Front Wing Angle */
    AFS_g_fault = false;
}

bool AFS_diagnostics_has_fault(void) {
    return AFS_g_fault;
}

void AFS_diagnostics_clear(void) {
    AFS_g_fault = false;
}
