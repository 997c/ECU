#include "AARdiagnostics.h"
#include <string.h>

static bool AAR_g_fault = false;

void AAR_diagnostics_init(void) {
    AAR_g_fault = false;
}

void AAR_diagnostics_run(const AAR_State* state) {
    (void)state;
    /* TODO: AAR diagnostic checks for Active Anti-Roll */
    AAR_g_fault = false;
}

bool AAR_diagnostics_has_fault(void) {
    return AAR_g_fault;
}

void AAR_diagnostics_clear(void) {
    AAR_g_fault = false;
}
