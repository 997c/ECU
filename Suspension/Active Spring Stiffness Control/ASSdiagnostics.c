#include "ASSdiagnostics.h"
#include <string.h>

static bool ASS_g_fault = false;

void ASS_diagnostics_init(void) {
    ASS_g_fault = false;
}

void ASS_diagnostics_run(const ASS_State* state) {
    (void)state;
    /* TODO: ASS diagnostic checks for Active Spring Stiffness Control */
    ASS_g_fault = false;
}

bool ASS_diagnostics_has_fault(void) {
    return ASS_g_fault;
}

void ASS_diagnostics_clear(void) {
    ASS_g_fault = false;
}
