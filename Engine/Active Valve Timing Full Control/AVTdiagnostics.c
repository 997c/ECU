#include "AVTdiagnostics.h"
#include <string.h>

static bool AVT_g_fault = false;

void AVT_diagnostics_init(void) {
    AVT_g_fault = false;
}

void AVT_diagnostics_run(const AVT_State* state) {
    (void)state;
    /* TODO: AVT diagnostic checks for Active Valve Timing Full Control */
    AVT_g_fault = false;
}

bool AVT_diagnostics_has_fault(void) {
    return AVT_g_fault;
}

void AVT_diagnostics_clear(void) {
    AVT_g_fault = false;
}
