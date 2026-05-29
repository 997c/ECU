#include "TQSdiagnostics.h"
#include <string.h>

static bool TQS_g_fault = false;

void TQS_diagnostics_init(void) {
    TQS_g_fault = false;
}

void TQS_diagnostics_run(const TQS_State* state) {
    (void)state;
    /* TODO: TQS diagnostic checks for Torque Shaping */
    TQS_g_fault = false;
}

bool TQS_diagnostics_has_fault(void) {
    return TQS_g_fault;
}

void TQS_diagnostics_clear(void) {
    TQS_g_fault = false;
}
