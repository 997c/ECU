#include "TVEdiagnostics.h"
#include <string.h>

static bool TVE_g_fault = false;

void TVE_diagnostics_init(void) {
    TVE_g_fault = false;
}

void TVE_diagnostics_run(const TVE_State* state) {
    (void)state;
    /* TODO: TVE diagnostic checks for Torque Vectoring by Electric Motor */
    TVE_g_fault = false;
}

bool TVE_diagnostics_has_fault(void) {
    return TVE_g_fault;
}

void TVE_diagnostics_clear(void) {
    TVE_g_fault = false;
}
