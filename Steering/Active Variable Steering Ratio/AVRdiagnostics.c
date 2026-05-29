#include "AVRdiagnostics.h"
#include <string.h>

static bool AVR_g_fault = false;

void AVR_diagnostics_init(void) {
    AVR_g_fault = false;
}

void AVR_diagnostics_run(const AVR_State* state) {
    (void)state;
    /* TODO: AVR diagnostic checks for Active Variable Steering Ratio */
    AVR_g_fault = false;
}

bool AVR_diagnostics_has_fault(void) {
    return AVR_g_fault;
}

void AVR_diagnostics_clear(void) {
    AVR_g_fault = false;
}
