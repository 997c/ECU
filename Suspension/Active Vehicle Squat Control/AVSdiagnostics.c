#include "AVSdiagnostics.h"
#include <string.h>

static bool AVS_g_fault = false;

void AVS_diagnostics_init(void) {
    AVS_g_fault = false;
}

void AVS_diagnostics_run(const AVS_State* state) {
    (void)state;
    /* TODO: AVS diagnostic checks for Active Vehicle Squat Control */
    AVS_g_fault = false;
}

bool AVS_diagnostics_has_fault(void) {
    return AVS_g_fault;
}

void AVS_diagnostics_clear(void) {
    AVS_g_fault = false;
}
