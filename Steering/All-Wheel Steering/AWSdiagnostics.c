#include "AWSdiagnostics.h"
#include <string.h>

static bool AWS_g_fault = false;

void AWS_diagnostics_init(void) {
    AWS_g_fault = false;
}

void AWS_diagnostics_run(const AWS_State* state) {
    (void)state;
    /* TODO: AWS diagnostic checks for All-Wheel Steering */
    AWS_g_fault = false;
}

bool AWS_diagnostics_has_fault(void) {
    return AWS_g_fault;
}

void AWS_diagnostics_clear(void) {
    AWS_g_fault = false;
}
