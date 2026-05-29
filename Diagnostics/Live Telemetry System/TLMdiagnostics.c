#include "TLMdiagnostics.h"
#include <string.h>

static bool TLM_g_fault = false;

void TLM_diagnostics_init(void) {
    TLM_g_fault = false;
}

void TLM_diagnostics_run(const TLM_State* state) {
    (void)state;
    /* TODO: TLM diagnostic checks for Live Telemetry System */
    TLM_g_fault = false;
}

bool TLM_diagnostics_has_fault(void) {
    return TLM_g_fault;
}

void TLM_diagnostics_clear(void) {
    TLM_g_fault = false;
}
