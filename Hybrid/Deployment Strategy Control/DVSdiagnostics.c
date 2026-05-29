#include "DVSdiagnostics.h"
#include <string.h>

static bool DVS_g_fault = false;

void DVS_diagnostics_init(void) {
    DVS_g_fault = false;
}

void DVS_diagnostics_run(const DVS_State* state) {
    (void)state;
    /* TODO: DVS diagnostic checks for Deployment Strategy Control */
    DVS_g_fault = false;
}

bool DVS_diagnostics_has_fault(void) {
    return DVS_g_fault;
}

void DVS_diagnostics_clear(void) {
    DVS_g_fault = false;
}
