#include "SSEdiagnostics.h"
#include <string.h>

static bool SSE_g_fault = false;

void SSE_diagnostics_init(void) {
    SSE_g_fault = false;
}

void SSE_diagnostics_run(const SSE_State* state) {
    (void)state;
    /* TODO: SSE diagnostic checks for Sideslip Angle Estimation */
    SSE_g_fault = false;
}

bool SSE_diagnostics_has_fault(void) {
    return SSE_g_fault;
}

void SSE_diagnostics_clear(void) {
    SSE_g_fault = false;
}
